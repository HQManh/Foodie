// rea decompile_all
// name: FUN_03f93074
// address: 0x3f93074
// body: available
// range: 0x3f93074-0x3f931df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f93074(long *param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  uint local_24;
  
  pbVar7 = (byte *)*param_1;
  if (pbVar7 == param_2) {
    return 1;
  }
  local_24 = 0;
  uVar4 = (uint)*pbVar7;
  uVar5 = (ulong)uVar4;
  if ((char)*pbVar7 < '\0') {
    if ((uVar4 & 0xe0) == 0xc0) {
      pbVar1 = pbVar7 + 1;
      *param_1 = (long)pbVar1;
      if (pbVar1 == param_2) {
        uVar3 = 1;
        goto LAB_03f931c4;
      }
      if ((*pbVar1 & 0xc0) != 0x80) {
        uVar3 = 3;
        goto LAB_03f931c4;
      }
      lVar6 = 2;
      uVar5 = (ulong)(*pbVar1 & 0x3f | (uVar4 & 0x1f) << 6);
    }
    else {
      if ((uVar4 & 0xf0) == 0xe0) {
        uVar3 = FUN_03f931e0(param_1,param_2,&local_24);
        lVar6 = 3;
        iVar2 = (int)uVar3;
      }
      else {
        if ((uVar4 & 0xf8) != 0xf0) {
          return 2;
        }
        uVar3 = FUN_03f93264(param_1,param_2,&local_24);
        lVar6 = 4;
        iVar2 = (int)uVar3;
      }
      if (iVar2 != 0) goto LAB_03f931c4;
      uVar5 = (ulong)local_24;
    }
  }
  else {
    lVar6 = 1;
  }
  uVar3 = 5;
  if ((0x10 < (uint)(uVar5 >> 0x10)) || (uVar4 = (uint)uVar5, (uVar4 & 0xfffff800) == 0xd800))
  goto LAB_03f931c4;
  if (uVar4 < 0x80) {
    if (lVar6 != 1) goto LAB_03f9319c;
  }
  else if (uVar4 < 0x800) {
    if (lVar6 != 2) {
LAB_03f9319c:
      uVar3 = 4;
      goto LAB_03f931c4;
    }
  }
  else if (((uVar5 & 0xffff0000) == 0) && (lVar6 != 3)) goto LAB_03f9319c;
  lVar6 = *param_1;
  uVar3 = 0;
  *param_3 = uVar4;
  pbVar7 = (byte *)(lVar6 + 1);
LAB_03f931c4:
  *param_1 = (long)pbVar7;
  return uVar3;
}

