'use client'

import Script from 'next/script'
import { useState } from 'react'

import JsonView from '@uiw/react-json-view'

interface LoongDocParser {
  (text: string): string
}

interface LoongDocProps {
  text: string
  className?: string
}

interface ParseLoongDoc {
  (arg0: string): string
}

interface EmscriptenModule {
  onRuntimeInitialized: () => void
  cwrap: (name: string, ret_type: string, params: [string]) => any
}

declare var Module: EmscriptenModule

export const LoongDoc = function (props: LoongDocProps) {
  let [parse_loongdoc, setParseLoongdoc] = useState<ParseLoongDoc | null>(
    () => null,
  )

  function js_parse_loongdoc() {
    if (parse_loongdoc == null) {
      return ''
    } else {
      let resptr = parse_loongdoc(props.text)
      return resptr
    }
  }

  return (
    <div className={props.className}>
      <Script
        src="loongdoc.js"
        onLoad={() => {
          Module.onRuntimeInitialized = function () {
            var story = '= One apon a time'
            var parser = Module.cwrap('js_parse_loongdoc', 'string', ['string'])
            setParseLoongdoc(() => parser)
          }
        }}
      ></Script>
      <JsonView
        value={parse_loongdoc == null ? '' : JSON.parse(js_parse_loongdoc())}
      />
    </div>
  )
}
