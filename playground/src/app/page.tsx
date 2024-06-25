'use client'

import Image from 'next/image'
import { LoongDoc } from './loong_doc'
import Editor from './editor'
import { useState } from 'react'
import { LoadFile } from './load_file'

const EXAMPLE = `
= title0

- list
- list
- list

NOTE: aaaa

IMPORTANT: bbbb
`

export default function Home() {
  let [value, setValue] = useState(EXAMPLE)

  return (
    <main className="h-screen w-full flex">
      <div className="h-full w-1/2">
        <LoadFile
          onValueChanged={value => {
            setValue(value)
          }}
        />
        <Editor
          className="h-full"
          value={value}
          onValueChanged={value => {
            setValue(value)
          }}
        />
      </div>
      <LoongDoc className="h-full w-1/2 overflow-auto bg-white" text={value} />
    </main>
  )
}
