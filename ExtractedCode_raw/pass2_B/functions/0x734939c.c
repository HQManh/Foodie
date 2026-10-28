// rea decompile_all
// name: Lean.Touch.LeanSelectableByFinger$$GetFingers
// address: 0x734939c
// body: available
// range: 0x734939c-0x734962b inclusive
// range: 0x734965c-0x7349737 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7349628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7349730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7349734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Lean_Touch_LeanSelectableByFinger__GetFingers
               (uint param_1,uint param_2,int param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09520754 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a55b8);
    FUN_03f5c2a4(&DAT_091a55c0);
    FUN_03f5c2a4(&DAT_091a55c8);
    FUN_03f5c2a4(&DAT_09187718);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae148);
    FUN_03f5c2a4(&DAT_091ae158);
    FUN_03f5c2a4(&DAT_091b3240);
    FUN_03f5c2a4(&DAT_091ae170);
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520754 = 1;
  }
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (*(int *)(DAT_09187728 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = Lean_Touch_LeanTouch__GetFingers(param_1 & 1,param_2 & 1,param_3,1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Inequality(param_4,0,0);
  if ((uVar5 & 1) == 0) {
    return lVar4;
  }
  if (param_4 == (long *)0x0) goto LAB_07349734;
  uVar5 = Lean_Common_LeanSelectable__get_IsSelected(param_4,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) goto LAB_07349734;
    iVar1 = *(int *)(lVar4 + 0x18);
    iVar6 = *(int *)(lVar4 + 0x1c);
  }
  else {
    if (*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) {
      param_4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 + -8)
             != DAT_09187718) {
      param_4 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(param_4,0,0);
    if ((uVar5 & 1) != 0) {
      if (param_4 == (long *)0x0) goto LAB_07349734;
      if ((int)param_4[8] == 2) {
        if (param_4[0xd] == 0) goto LAB_07349734;
        FUN_0595a294(&local_80,param_4[0xd],DAT_091b3240);
        puStack_58 = puStack_78;
        local_60 = local_80;
        uStack_48 = uStack_68;
        local_50 = uStack_70;
        local_80 = 0;
        puStack_78 = &local_60;
        while (uVar5 = FUN_07228424(&local_60,DAT_091a55c0), (uVar5 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e2274(lVar4,uStack_48,DAT_091ae170);
        }
        FUN_07228420(&local_60,DAT_091a55b8);
      }
      else if ((int)param_4[8] == 1) {
        if (lVar4 == 0) goto LAB_07349734;
        FUN_03ea9dd4(lVar4,DAT_091ae158);
        if (param_4[0xd] == 0) goto LAB_07349734;
        FUN_0595a294(&local_80,param_4[0xd],DAT_091b3240);
        puStack_58 = puStack_78;
        local_60 = local_80;
        uStack_48 = uStack_68;
        local_50 = uStack_70;
        local_80 = 0;
        puStack_78 = &local_60;
        while (uVar5 = FUN_07228424(&local_60,DAT_091a55c0), lVar3 = DAT_091ae148, (uVar5 & 1) != 0)
        {
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uStack_48;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar4,uStack_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_03ea9f10(&local_80);
      }
    }
    if (param_3 < 1) {
      return lVar4;
    }
    if (lVar4 == 0) {
LAB_07349734:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 == param_3) {
      return lVar4;
    }
    iVar6 = *(int *)(lVar4 + 0x1c);
  }
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(int *)(lVar4 + 0x1c) = iVar6 + 1;
  if (0 < iVar1) {
    System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
  }
  return lVar4;
}

