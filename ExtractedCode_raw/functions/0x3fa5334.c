// rea decompile_all
// name: FUN_03fa5334
// address: 0x3fa5334
// body: available
// range: 0x3fa5334-0x3fa5507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa5504 to 0x3fa9320 FUN_03fa9320 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa5334(undefined4 param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined4 *puVar7;
  void *local_80;
  int local_74 [4];
  ushort local_64 [2];
  void *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 != 0) {
    local_28 = FUN_03f98240(param_2);
    uStack_24 = 0;
    puVar7 = &local_28;
    lVar3 = FUN_03f5da68(param_1,1);
    if (lVar3 == 0) {
      uVar1 = FUN_03fa5324(0x8007000e,1);
      local_74[1] = 0x3fa53f8;
      local_74[2] = 0;
      if (puVar7 == (undefined4 *)0x0) {
        return 0;
      }
      uVar6 = FUN_03f8979c(puVar7,local_64);
      if (-1 < (int)uVar6) {
        if ((local_64[0] == uVar1) && (iVar2 = FUN_03f5d7a4(puVar7), iVar2 == 1)) {
          uVar6 = FUN_03f897ac(puVar7,1,local_74 + 3);
          if ((-1 < (int)uVar6) && (uVar6 = FUN_03f897ac(puVar7,1,local_74), -1 < (int)uVar6)) {
            lVar3 = FUN_03f984c8(extraout_x1,(long)((local_74[0] - local_74[3]) + 1));
            uVar6 = FUN_03f8978c(puVar7,&local_80);
            if (-1 < (int)uVar6) {
              pvVar4 = (void *)FUN_03f61ed0(lVar3);
              uVar5 = FUN_03f98484(lVar3);
              memcpy(pvVar4,local_80,uVar5 & 0xffffffff);
              uVar6 = FUN_03f896dc(puVar7);
              if (-1 < (int)uVar6) {
                return lVar3;
              }
            }
          }
        }
        else {
          uVar6 = 0x80070057;
        }
      }
      lVar3 = FUN_03fa5324(uVar6,1);
      lVar3 = FUN_03fa9320(lVar3,*(undefined8 *)(lVar3 + 8));
      return lVar3;
    }
    iVar2 = FUN_03f8978c(lVar3,&local_38);
    if (-1 < iVar2) {
      pvVar4 = (void *)FUN_03f61ed0(param_2);
      uVar5 = FUN_03f98484(param_2);
      memcpy(local_38,pvVar4,uVar5 & 0xffffffff);
      iVar2 = FUN_03f896dc(lVar3);
      if (-1 < iVar2) {
        return lVar3;
      }
    }
    FUN_03f896dc(lVar3);
    FUN_03fa5324(iVar2,1);
  }
  return 0;
}

