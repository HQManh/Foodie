// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$TryAdmitFront
// address: 0x420fe34
// body: available
// range: 0x420fe34-0x421008f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420ff3c to 0x4210adc AnhPD.FoodOrder.CustomerSpawner$$ScheduleAdmitRecheck (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4210050 to 0x420ec80 AnhPD.FoodOrder.CustomerSpawner$$RefreshPreviews (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4210088 to 0x4210bec AnhPD.FoodOrder.CustomerSpawner$$AdmitToOrderArea (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421008c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__TryAdmitFront(long param_1)

{
  uint uVar1;
  float fVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09516c71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acab0);
    FUN_03f5c2a4(&DAT_091b2668);
    FUN_03f5c2a4(&DAT_091b2670);
    FUN_03f5c2a4(&DAT_091b2678);
    DAT_09516c71 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x18) == 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      return;
    }
    lVar3 = FUN_057e0998(lVar3,0,DAT_091b2678);
    if (lVar3 != 0) {
      if ((*(char *)(lVar3 + 0x2d) != '\0') && (*(long *)(param_1 + 0xa8) != 0)) {
        return;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        if (*(char *)(*(long *)(lVar3 + 0x10) + 0x41) == '\0') {
          return;
        }
        if (*(char *)(lVar3 + 0x2c) == '\0') {
          if (*(float *)(lVar3 + 0x28) < 0.0) {
            uVar10 = UnityEngine_Time__get_time(0);
            *(undefined4 *)(lVar3 + 0x28) = uVar10;
          }
          fVar13 = *(float *)(param_1 + 0x70);
          fVar11 = (float)UnityEngine_Time__get_time(0);
          if (0.0 < fVar13 - (fVar11 - *(float *)(lVar3 + 0x28))) {
            AnhPD_FoodOrder_CustomerSpawner__ScheduleAdmitRecheck(param_1);
            return;
          }
        }
        uVar4 = AnhPD_FoodOrder_CustomerSpawner__CanAdmit(param_1,lVar3);
        if ((uVar4 & 1) == 0) {
          if (*(char *)(lVar3 + 0x2c) == '\0') {
            return;
          }
          lVar6 = *(long *)(param_1 + 0x30);
          *(undefined1 *)(lVar3 + 0x2c) = 0;
          if (lVar6 != 0) {
            AnhPD_FoodOrder_CustomerLineLayout__MoveWaitingLine
                      (lVar6,*(undefined8 *)(lVar3 + 0x10),0);
            fVar13 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c) * 0.0;
            fVar12 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 100) * 0.0;
            fVar11 = 1.0;
            if (fVar13 <= 1.0) {
              fVar11 = fVar13;
            }
            fVar2 = 0.0;
            if (0.0 <= fVar13) {
              fVar2 = fVar11;
            }
            fVar11 = 0.05;
            if (0.05 <= fVar12) {
              fVar11 = fVar12;
            }
            if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
              AnhPD_FoodOrder_FCustomerLine__SetWaitingLook
                        (fVar2,fVar11,*(undefined4 *)(param_1 + 0x68),
                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34));
              AnhPD_FoodOrder_CustomerSpawner__RefreshPreviews(param_1);
              return;
            }
          }
        }
        else if (*(long *)(param_1 + 0x98) != 0) {
          FUN_057e251c(*(long *)(param_1 + 0x98),0,DAT_091b2668);
          lVar6 = DAT_091acab0;
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            uVar7 = *(undefined8 *)(lVar3 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar7;
                thunk_FUN_03f5d7b8(puVar9);
              }
              else {
                FUN_057e0c68(lVar5,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar3 + 0x10);
              thunk_FUN_03f5d7b8();
              AnhPD_FoodOrder_CustomerSpawner__AdmitToOrderArea(param_1,lVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

