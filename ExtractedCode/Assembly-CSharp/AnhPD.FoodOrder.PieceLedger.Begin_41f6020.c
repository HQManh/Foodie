// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$Begin
// address: 0x41f6020
// body: available
// range: 0x41f6020-0x41f6497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f6494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__Begin(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int local_54;
  long local_50;
  undefined8 local_48;
  
  if ((DAT_09516b9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ca70);
    FUN_03f5c2a4(&DAT_0919ca78);
    FUN_03f5c2a4(&DAT_0919ea28);
    FUN_03f5c2a4(&DAT_0919ca90);
    FUN_03f5c2a4(&DAT_091b3630);
    FUN_03f5c2a4(&DAT_091b3640);
    FUN_03f5c2a4(&DAT_091b3658);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09193340);
    FUN_03f5c2a4(&DAT_09193348);
    FUN_03f5c2a4(&DAT_091f6ce8);
    FUN_03f5c2a4(&DAT_09226128);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_09220e60);
    DAT_09516b9f = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09189140 + 0xb8) != 0) {
    uVar4 = FUN_06fd9fbc(**(long **)(DAT_09189140 + 0xb8),param_1,&local_48,DAT_0919ca78);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09189140 + 0xb8) == 0) goto LAB_041f6494;
      FUN_06fd9970(**(long **)(DAT_09189140 + 0xb8),param_1,DAT_0919ca70);
      AnhPD_FoodOrder_PieceLedger__Close(local_48,7,DAT_09220e60);
    }
    if (param_4 != 0) {
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x28);
      if (lVar5 == 0) goto LAB_041f6494;
      uVar4 = FUN_06fd9fbc(lVar5,param_4,&local_50,DAT_0919ea28);
      lVar5 = local_50;
      if ((uVar4 & 1) != 0) {
        if (local_50 == 0) goto LAB_041f6494;
        if (0 < *(int *)(local_50 + 0x18)) {
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = AnhPD_FoodOrder_PieceLedger__Describe(lVar5);
          param_3 = System_String__Concat(param_3,DAT_091f6ce8,uVar6,DAT_09214720,0);
          if (local_50 == 0) goto LAB_041f6494;
          iVar1 = *(int *)(local_50 + 0x18);
          *(undefined4 *)(local_50 + 0x18) = 0;
          *(int *)(local_50 + 0x1c) = *(int *)(local_50 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(local_50 + 0x10),0,iVar1,0);
          }
        }
      }
    }
    lVar5 = thunk_FUN_03f9944c(DAT_09193348);
    AnhPD_FoodOrder_PieceLedger_Trace___ctor();
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x88) + 1;
    *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x88) = iVar1;
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) = iVar1, param_1 != (long *)0x0)) {
      uVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      puVar11 = (undefined8 *)(lVar5 + 0x18);
      *puVar11 = uVar6;
      thunk_FUN_03f5d7b8(puVar11,uVar6);
      *(int *)(lVar5 + 0x20) = param_2;
      *(undefined8 *)(lVar5 + 0x28) = param_3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28),param_3);
      uVar12 = UnityEngine_Time__get_timeSinceLevelLoad(0);
      *(long *)(lVar5 + 0x38) = (long)param_1;
      *(undefined4 *)(lVar5 + 0x30) = uVar12;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x38),param_1);
      lVar3 = DAT_09189140;
      *(undefined4 *)(lVar5 + 0x40) = 0;
      if (**(long **)(lVar3 + 0xb8) != 0) {
        FUN_06fd8440(**(long **)(lVar3 + 0xb8),param_1,lVar5,DAT_0919ca90);
        lVar3 = DAT_091b3630;
        lVar7 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 8);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar10 = lVar5;
              thunk_FUN_03f5d7b8(plVar10,lVar5);
            }
            else {
              FUN_057e0c68(lVar7,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            if (param_2 == 5) {
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x94) =
                   *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x94) + 1;
            }
            else {
              if (param_2 == 2) {
                if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = *(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0x60);
              }
              else {
                if (param_2 != 1) goto LAB_041f6420;
                if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = *(undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0x58);
              }
              AnhPD_FoodOrder_PieceLedger__Bump(uVar6,*puVar11,1);
            }
LAB_041f6420:
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = AnhPD_FoodOrder_PieceLedger__Tag(lVar5);
            local_54 = param_2;
            uVar8 = FUN_03f5c42c(DAT_09193340,&local_54);
            System_String__Format(DAT_09226128,uVar6,uVar8,param_3,0);
            AnhPD_FoodOrder_PieceLedger__Log();
            return;
          }
        }
      }
    }
  }
LAB_041f6494:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

