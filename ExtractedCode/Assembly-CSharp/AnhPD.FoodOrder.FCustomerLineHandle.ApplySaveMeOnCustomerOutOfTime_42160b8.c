// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$ApplySaveMeOnCustomerOutOfTime
// address: 0x42160b8
// body: available
// range: 0x42160b8-0x4216387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4216378 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421637c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4216380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4216384 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle__ApplySaveMeOnCustomerOutOfTime(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09516cb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091aa460);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091aa468);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e9f88);
    FUN_03f5c2a4(&DAT_09190890);
    DAT_09516cb2 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09190890);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    plVar7 = (long *)(lVar3 + 0x18);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar4 = FUN_057e28a4(*(long *)(param_1 + 0xf8),DAT_091aa468);
      lVar6 = *(long *)(param_1 + 0xf8);
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        }
        *(undefined1 *)(param_1 + 0x100) = 0;
        if (*(long *)(param_1 + 0xe8) != 0) {
          FUN_057e185c(&local_88,*(long *)(param_1 + 0xe8),DAT_091acac8);
          local_60 = local_78;
          puStack_68 = puStack_80;
          local_70 = local_88;
          local_88 = 0;
          puStack_80 = &local_70;
          while (uVar5 = FUN_071bd28c(&local_70,DAT_091a2c68), lVar6 = local_60, (uVar5 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
            if ((uVar5 & 1) != 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((*(int *)(*(long *)(lVar6 + 0x38) + 0x10) == 3) &&
                 (uVar5 = AnhPD_FoodOrder_FCustomerLine__get_IsUseTimer(lVar6), (uVar5 & 1) != 0)) {
                AnhPD_FoodOrder_FCustomerLine__RefillWaitTime(lVar6);
              }
            }
          }
          FUN_071bd288(&local_70,DAT_091a2c60);
          if (lVar4 != 0) {
            uVar2 = *(uint *)(lVar4 + 0x18);
            *(uint *)(lVar3 + 0x10) = uVar2;
            if (uVar2 == 0) {
              lVar3 = *plVar7;
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
              }
            }
            else if (0 < (int)uVar2) {
              lVar6 = 0;
              do {
                if (uVar2 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar8 = *(long *)(lVar3 + 0x20);
                lVar9 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
                if (lVar8 == 0) {
                  lVar8 = thunk_FUN_03f9944c(DAT_09180e78);
                  System_Action___ctor(lVar8,lVar3,DAT_091e9f88,0);
                  *(long *)(lVar3 + 0x20) = lVar8;
                  thunk_FUN_03f5d7b8(lVar3 + 0x20,lVar8);
                }
                if (lVar9 == 0) goto LAB_04216378;
                (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),lVar8,*(undefined8 *)(lVar9 + 0x28));
                uVar2 = *(uint *)(lVar4 + 0x18);
                lVar6 = lVar6 + 1;
              } while ((int)lVar6 < (int)uVar2);
            }
            return;
          }
        }
      }
    }
  }
LAB_04216378:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

