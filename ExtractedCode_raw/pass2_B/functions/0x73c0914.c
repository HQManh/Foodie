// rea decompile_all
// name: MessagePack.Internal.UnsafeRefSerializeHelper$$ReverseWriteUnknown
// address: 0x73c0914
// body: available
// range: 0x73c0914-0x73c0a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_UnsafeRefSerializeHelper__ReverseWriteUnknown
          (undefined1 *param_1,ulong param_2)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar3 = (uint)param_2;
  uVar4 = (undefined1)param_2;
  uVar1 = (ushort)(param_2 >> 8);
  if ((long)param_2 < 0) {
    if (param_2 < 0xffffffff80000000) {
      uVar4 = 0xd3;
      goto LAB_073c0958;
    }
    if (uVar3 < 0xffff8000) {
      uVar4 = 0xd2;
      goto LAB_073c0980;
    }
    if (0x1fe < (uVar3 >> 7 & 0x1ff)) {
      if ((uVar3 & 0xff) < 0xe0) {
        param_1[1] = uVar4;
        param_2 = 0xd0;
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      *param_1 = (char)param_2;
      return uVar5;
    }
    uVar1 = uVar1 & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
    uVar4 = 0xd1;
  }
  else {
    if (param_2 >> 0x20 != 0) {
      uVar4 = 0xcf;
LAB_073c0958:
      uVar2 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      *param_1 = uVar4;
      *(ulong *)(param_1 + 1) = uVar2 >> 0x20 | uVar2 << 0x20;
      return 9;
    }
    if ((param_2 >> 0x10 & 0xffff) != 0) {
      uVar4 = 0xce;
LAB_073c0980:
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *param_1 = uVar4;
      *(uint *)(param_1 + 1) = uVar3 >> 0x10 | uVar3 << 0x10;
      return 5;
    }
    if ((uVar3 & 0xffff) < 0x100) {
      if ((uVar3 >> 7 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        param_1[1] = uVar4;
        uVar4 = 0xcc;
        uVar5 = 2;
      }
      *param_1 = uVar4;
      return uVar5;
    }
    uVar1 = uVar1 & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
    uVar4 = 0xcd;
  }
  *param_1 = uVar4;
  *(ushort *)(param_1 + 1) = uVar1;
  return 3;
}

