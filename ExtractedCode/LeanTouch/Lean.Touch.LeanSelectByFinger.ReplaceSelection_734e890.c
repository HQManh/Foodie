// rea decompile_all
// name: Lean.Touch.LeanSelectByFinger$$ReplaceSelection
// address: 0x734e890
// body: available
// range: 0x734e890-0x734eabf inclusive
// range: 0x734eb04-0x734eb2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734eabc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanSelectByFinger__ReplaceSelection(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  
  if ((DAT_09520749 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36f8);
    FUN_03f5c2a4(&DAT_091a3700);
    FUN_03f5c2a4(&DAT_091a3708);
    FUN_03f5c2a4(&DAT_09187718);
    FUN_03f5c2a4(&DAT_091ae1a0);
    FUN_03f5c2a4(&DAT_091ae1a8);
    FUN_03f5c2a4(&DAT_091ae1c0);
    FUN_03f5c2a4(&DAT_091ae1c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09520749 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (long *)0x0;
  if (param_2 == 0) {
    Lean_Common_LeanSelect__DeselectAll(param_1,0);
  }
  else {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (iVar4 = *(int *)(*(long *)(param_1 + 0x38) + 0x18), -1 < iVar4 + -1)) {
      do {
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = iVar4 + -1;
        uVar2 = FUN_057e0998(*(long *)(param_1 + 0x38),iVar4,DAT_091ae1c8);
        uVar3 = FUN_057e1004(param_2,uVar2,DAT_091ae1a0);
        if ((uVar3 & 1) == 0) {
          Lean_Common_LeanSelect__Deselect(param_1,uVar2,0);
        }
      } while (0 < iVar4);
    }
    FUN_057e185c(&local_88,param_2,DAT_091ae1a8);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar3 = FUN_071bd28c(&local_70,DAT_091a3700), plVar1 = local_60, (uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (uVar3 = FUN_057e1004(*(long *)(param_1 + 0x38),local_60,DAT_091ae1a0), (uVar3 & 1) == 0))
      {
        if (plVar1 == (long *)0x0) {
LAB_0734ea44:
          plVar5 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) goto LAB_0734ea44;
          plVar5 = plVar1;
          if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 + -8)
              != DAT_09187718) {
            plVar5 = (long *)0x0;
          }
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Inequality(plVar5,0,0);
        if ((uVar3 & 1) == 0) {
          Lean_Common_LeanSelect__TrySelect(param_1,plVar1,0);
        }
        else {
          Lean_Touch_LeanSelectByFinger__Select(param_1,plVar5,param_3);
        }
      }
    }
    FUN_071bd288(&local_70,DAT_091a36f8);
  }
  return;
}

