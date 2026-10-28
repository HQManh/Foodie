// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$.ctor
// address: 0x456e3f0
// body: available
// range: 0x456e3f0-0x456e5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456e5bc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456e5f8 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456e5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_Path___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,char *param_9)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_09518883 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1178);
    FUN_03f5c2a4(&DAT_091b6b20);
    FUN_03f5c2a4(&DAT_091b6b28);
    FUN_03f5c2a4(&DAT_091d5850);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_09518883 = 1;
  }
  *(undefined4 *)(param_5 + 0x50) = 0xffffffff;
  *(undefined8 *)(param_5 + 0x114) = 0x3f3333333f800000;
  *(undefined8 *)(param_5 + 0x10c) = 0x3f8000003f800000;
  System_Object___ctor(param_5,0);
  cVar1 = *param_9;
  *(undefined4 *)(param_5 + 0x20) = param_6;
  *(undefined4 *)(param_5 + 0x24) = param_8;
  if (cVar1 != '\0') {
    uVar8 = FUN_05c2aa64(param_9,DAT_091b6b28);
    *(undefined4 *)(param_5 + 0x10c) = uVar8;
    *(undefined4 *)(param_5 + 0x110) = param_2;
    *(undefined4 *)(param_5 + 0x114) = param_3;
    *(undefined4 *)(param_5 + 0x118) = param_4;
  }
  DG_Tweening_Plugins_Core_PathCore_Path__AssignWaypoints(param_5,param_7,1);
  DG_Tweening_Plugins_Core_PathCore_Path__AssignDecoder(param_5,param_6);
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_0918c158 + 0xb8) != '\0') {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(*(long *)(DAT_09183190 + 0xb8) + 0x88);
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,param_5,DAT_091d5850,0);
    lVar3 = DAT_091b1178;
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *puVar5 = uVar4;
          thunk_FUN_03f5d7b8(puVar5,uVar4);
          return;
        }
        FUN_057e0c68(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

