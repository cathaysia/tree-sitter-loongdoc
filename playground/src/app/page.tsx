'use client'
import Image from 'next/image'
import { LoongDoc } from './LoongDoc'
import Editor from './Editor'
import { useState } from 'react'

export default function Home() {
  let [value, setValue] = useState('= title0\n')

  return (
    <main className="h-screen w-full flex">
      <Editor
        className="h-full w-1/2"
        value={value}
        onValueChanged={value => {
          setValue(value)
          console.log(value)
        }}
      />
      <LoongDoc className="h-full w-1/2" text={value} />
    </main>
  )
}
