// rea decompile_all
// name: FUN_03fe9808
// address: 0x3fe9808
// body: available
// range: 0x3fe9808-0x3fe9bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_03fe9808(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      uVar1 = param_2 % 100000000;
      if (param_2 < 1000000000) {
        *param_1 = (byte)(param_2 / 100000000) | 0x30;
        uVar2 = (uVar1 % 1000000) % 10000;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 1000000) * 2)
        ;
        *(undefined2 *)(param_1 + 3) =
             *(undefined2 *)(&UNK_023af5f8 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
        *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 / 100) * 2);
        *(undefined2 *)(param_1 + 7) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 % 100) * 2);
        return param_1 + 9;
      }
      uVar2 = (uVar1 % 1000000) % 10000;
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_023af5f8 + (ulong)(param_2 / 100000000) * 2);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)(&UNK_023af5f8 + ((ulong)(uVar1 % 1000000) / 10000) * 2);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 / 100) * 2);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar2 % 100) * 2);
      return param_1 + 10;
    }
    uVar1 = param_2 % 1000000;
    if (param_2 < 10000000) {
      *param_1 = (char)(param_2 / 1000000) + 0x30;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 10000) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&UNK_023af5f8 + (ulong)((uVar1 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 5) =
           *(undefined2 *)(&UNK_023af5f8 + (ulong)((uVar1 % 10000) % 100) * 2);
      return param_1 + 7;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_023af5f8 + (ulong)(param_2 / 1000000) * 2);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&UNK_023af5f8 + (ulong)((uVar1 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 6) =
         *(undefined2 *)(&UNK_023af5f8 + (ulong)((uVar1 % 10000) % 100) * 2);
    return param_1 + 8;
  }
  if (0x270 < param_2 >> 4) {
    if (param_2 >> 5 < 0xc35) {
      *param_1 = (byte)(param_2 / 10000) | 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(&UNK_023af5f8 + (ulong)((param_2 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)(&UNK_023af5f8 + (ulong)((param_2 % 10000) % 100) * 2);
      return param_1 + 5;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_023af5f8 + (ulong)(param_2 / 10000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)(&UNK_023af5f8 + (ulong)((param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)(&UNK_023af5f8 + (ulong)((param_2 % 10000) % 100) * 2);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (byte)param_2 | 0x30;
      return param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_023af5f8 + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  uVar3 = (ulong)(param_2 + uVar1 * -100);
  if (param_2 < 1000) {
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_023af5f8 + (uVar3 & 0xffff) * 2);
    return param_1 + 3;
  }
  *(undefined2 *)param_1 = *(undefined2 *)(&UNK_023af5f8 + (ulong)uVar1 * 2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_023af5f8 + (uVar3 & 0xffff) * 2);
  return param_1 + 4;
}

