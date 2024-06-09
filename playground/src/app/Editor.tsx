'use client'
import React from 'react'
import CodeMirror from '@uiw/react-codemirror'

interface EditorProps {
  className?: string
  value: string
  onValueChanged?: (text: string) => void
}

export default function Editor(props: EditorProps) {
  const onChange = React.useCallback(
    (val: string, viewUpdate: any) => {
      if (props.onValueChanged) {
        props.onValueChanged(val)
      }
    },
    [props],
  )

  return (
    <CodeMirror
      height="100%"
      className={props.className}
      value={props.value}
      onChange={onChange}
    />
  )
}
