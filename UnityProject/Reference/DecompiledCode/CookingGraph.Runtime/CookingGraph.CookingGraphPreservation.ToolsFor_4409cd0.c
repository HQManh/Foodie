// rea decompile_all
// name: CookingGraph.CookingGraphPreservation$$ToolsFor
// address: 0x4409cd0
// body: available
// range: 0x4409cd0-0x4409f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4409f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409f70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409f74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingGraphPreservation__ToolsFor(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09517ec1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3d88);
    FUN_03f5c2a4(&DAT_091a3d90);
    FUN_03f5c2a4(&DAT_091a3d98);
    FUN_03f5c2a4(&DAT_091b0fc0);
    FUN_03f5c2a4(&DAT_091b0fc8);
    FUN_03f5c2a4(&DAT_091ada10);
    FUN_03f5c2a4(&DAT_091af238);
    FUN_03f5c2a4(&DAT_091b0fb8);
    FUN_03f5c2a4(&DAT_0917ce80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517ec1 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917ce80);
  FUN_057e0400(lVar3,DAT_091b0fb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((uVar4 & 1) == 0) {
      if ((param_1 == 0) || (*(long *)(param_1 + 0x98) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_98,*(long *)(param_1 + 0x98),DAT_091af238);
      uStack_78 = puStack_90;
      local_80 = local_98;
      local_70 = local_88;
      puStack_90 = &local_80;
      local_98 = 0;
      while (uVar4 = FUN_071bd28c(&local_80,DAT_091a3d90), lVar2 = local_70, (uVar4 & 1) != 0) {
        if (local_70 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(local_70 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = FUN_057e1004(lVar3,*(undefined8 *)(lVar2 + 0x10),DAT_091b0fc8);
          if ((uVar4 & 1) == 0) {
            lVar5 = CookingGraph_CookingGraphPreservation__IngredientsFor
                              (param_1,*(undefined8 *)(lVar2 + 0x10));
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = FUN_057e1004(lVar5,param_2,DAT_091ada10);
            lVar5 = DAT_091b0fc0;
            if ((uVar4 & 1) != 0) {
              lVar6 = *(long *)(lVar3 + 0x10);
              uVar7 = *(undefined8 *)(lVar2 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar3,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      FUN_071bd288(&local_80,DAT_091a3d88);
    }
  }
  return lVar3;
}

