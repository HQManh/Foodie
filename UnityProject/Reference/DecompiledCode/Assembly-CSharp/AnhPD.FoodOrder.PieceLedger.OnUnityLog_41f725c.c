// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$OnUnityLog
// address: 0x41f725c
// body: available
// range: 0x41f725c-0x41f75f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f75f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__OnUnityLog(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int local_4c;
  int local_48;
  undefined4 local_44;
  
  if ((DAT_09516ba6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_09187c68);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09225f78);
    FUN_03f5c2a4(&DAT_091fd2a8);
    DAT_09516ba6 = 1;
  }
  if (param_3 == 3) {
    return;
  }
  if (param_3 == 2) {
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_09189140;
    *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x7c) =
         *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x7c) + 1;
  }
  else {
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_09189140;
    *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x78) =
         *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x78) + 1;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_09189140;
  }
  uVar2 = System_String__op_Equality(param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = (undefined8 *)(*(long *)(DAT_09189140 + 0xb8) + 0x80);
  *puVar3 = param_1;
  thunk_FUN_03f5d7b8(puVar3,param_1);
  local_44 = UnityEngine_Time__get_timeSinceLevelLoad(0);
  uVar4 = FUN_03f5c42c(DAT_09535450,&local_44);
  local_48 = param_3;
  uVar5 = FUN_03f5c42c(DAT_09187c68,&local_48);
  uVar4 = System_String__Format(DAT_09225f78,uVar4,uVar5,0);
  lVar6 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar6,uVar4,0);
  uVar4 = AnhPD_FoodOrder_PieceLedger__FirstLines(param_1,4);
  if (lVar6 == 0) goto LAB_041f75f4;
  plVar7 = (long *)System_Text_StringBuilder__Append(lVar6,uVar4,0);
  if ((param_3 != 2) && (uVar2 = System_String__IsNullOrEmpty(param_2,0), (uVar2 & 1) == 0)) {
    if (plVar7 == (long *)0x0) goto LAB_041f75f4;
    lVar6 = System_Text_StringBuilder__Append(plVar7,10,0);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189140);
    }
    uVar4 = AnhPD_FoodOrder_PieceLedger__FirstLines(param_2,4);
    if (lVar6 == 0) goto LAB_041f75f4;
    System_Text_StringBuilder__Append(lVar6,uVar4,0);
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (plVar7 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x70);
    uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    lVar6 = DAT_091b0570;
    if (lVar9 != 0) {
      lVar8 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar9,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar6 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x70);
        if (lVar6 != 0) {
          if (0x28 < *(int *)(lVar6 + 0x18)) {
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189140);
              lVar6 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x70);
              if (lVar6 == 0) goto LAB_041f75f4;
            }
            FUN_057e251c(lVar6,0,DAT_091b05d8);
          }
          local_4c = param_3;
          uVar4 = FUN_03f5c42c(DAT_09187c68,&local_4c);
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189140);
          }
          uVar5 = AnhPD_FoodOrder_PieceLedger__FirstLine(param_1);
          System_String__Format(DAT_091fd2a8,uVar4,uVar5,0);
          AnhPD_FoodOrder_PieceLedger__Log();
          return;
        }
      }
    }
  }
LAB_041f75f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

