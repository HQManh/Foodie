// rea decompile_all
// name: CakeOrder.MapToolConfig$$ParseFloatList
// address: 0x426fd14
// body: available
// range: 0x426fd14-0x426ffb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426ffb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426ffb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapToolConfig__ParseFloatList(undefined4 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((DAT_09517009 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091affd0);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_09205900);
    DAT_09517009 = 1;
  }
  local_54 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(lVar2,DAT_091aff90);
  if ((param_2 != 0) && (lVar3 = System_String__Split(param_2,0x2c,0,0), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar4 = System_String__Trim(lVar4,0), lVar4 == 0)) goto LAB_0426ffb0;
        if (*(int *)(lVar4 + 0x10) != 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar6 = System_Single__TryParse(lVar4,0xa7,uVar5,&local_54,0);
          lVar7 = DAT_091affa0;
          if ((uVar6 & 1) == 0) {
            local_58 = param_1;
            uVar5 = FUN_03f5c42c(DAT_09535450,&local_58);
            uVar5 = System_String__Format(DAT_09205900,lVar4,uVar5,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar5,0);
            lVar4 = DAT_091affa0;
            if (lVar2 == 0) goto LAB_0426ffb0;
            lVar7 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_0426ffb0;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
              lVar4 = *(long *)(lVar4 + 0x20);
              uVar9 = param_1;
              goto LAB_0426ff5c;
            }
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = param_1;
          }
          else {
            if (lVar2 == 0) goto LAB_0426ffb0;
            lVar4 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar4 == 0) goto LAB_0426ffb0;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = local_54;
            }
            else {
              lVar4 = *(long *)(lVar7 + 0x20);
              uVar9 = local_54;
LAB_0426ff5c:
              FUN_05863604(uVar9,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
            }
          }
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (lVar2 != 0) {
      FUN_0586519c(lVar2,DAT_091affd0);
      return;
    }
  }
LAB_0426ffb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

