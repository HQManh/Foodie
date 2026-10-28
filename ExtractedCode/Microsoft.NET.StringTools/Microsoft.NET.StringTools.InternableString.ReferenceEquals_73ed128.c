// rea decompile_all
// name: Microsoft.NET.StringTools.InternableString$$ReferenceEquals
// address: 0x73ed128
// body: available
// range: 0x73ed128-0x73ed31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ed314 to 0x5ff6c20 FUN_05ff6c20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73ed318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Microsoft_NET_StringTools_InternableString__ReferenceEquals(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09520df5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa8e0);
    FUN_03f5c2a4(&DAT_091aa8e8);
    FUN_03f5c2a4(&DAT_091b9688);
    FUN_03f5c2a4(&DAT_091b9690);
    FUN_03f5c2a4(&DAT_091b9808);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091b9818);
    DAT_09520df5 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*(int *)(param_1 + 1) == *(int *)(param_1 + 4)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (DAT_09515cf2 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09515cf2 = '\x01';
    }
    if (param_2 == 0) {
      uVar5 = 0;
      uVar8 = 0;
    }
    else {
      uVar5 = System_String__GetRawStringData(param_2,0);
      uVar8 = *(undefined4 *)(param_2 + 0x10);
    }
    uVar7 = FUN_05ff6c20(uVar1,uVar2,uVar5,uVar8,DAT_091b9818);
    return uVar7;
  }
  uVar7 = FUN_05ff6f60(param_1,DAT_091b9808);
  if ((uVar7 & 1) != 0) {
    lVar6 = param_1[3];
    uVar4 = 0;
    if (lVar6 == 0) goto LAB_073ed2c0;
    if (*(int *)(lVar6 + 0x18) == 1) {
      local_40 = FUN_056981cc(lVar6,0,DAT_091aa8e8);
      iVar3 = FUN_05fd73e4(local_40,DAT_091b9688);
      uVar4 = 0;
      if (iVar3 == *(int *)(param_1 + 4)) {
        if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar9 = FUN_056981cc(param_1[3],0,DAT_091aa8e8);
        local_40 = auVar9;
        auVar9 = FUN_04a6d894(local_40,DAT_091b9690);
        auVar10 = FUN_073ee7a0(param_2,0);
        uVar4 = FUN_05ff6c20(auVar9._0_8_,auVar9._8_8_,auVar10._0_8_,auVar10._8_8_,DAT_091b9818);
      }
      goto LAB_073ed2c0;
    }
  }
  uVar4 = 0;
LAB_073ed2c0:
  return (ulong)(uVar4 & 1);
}

