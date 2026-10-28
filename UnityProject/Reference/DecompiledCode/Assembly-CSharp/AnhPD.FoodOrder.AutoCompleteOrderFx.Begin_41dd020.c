// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$Begin
// address: 0x41dd020
// body: available
// range: 0x41dd020-0x41dd2fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dd2f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dd2f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dd2f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__Begin(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 *puStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  
  if ((DAT_09516acc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac050);
    FUN_03f5c2a4(&DAT_091ac060);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516acc = 1;
  }
  lVar4 = DAT_091b4c28;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  lVar4 = *(long *)(lVar4 + 0x20);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar5 & 1) != 0) {
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_041dd2f8;
    Utilities_BoolModifierWithRegisteredSource__AddModifier(*(long *)(lVar4 + 0x58),0x3ef,0);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    uVar9 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar5 & 1) != 0) {
      if (((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
          (lVar4 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xf8), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) goto LAB_041dd2f8;
      FUN_057e185c(&local_68,lVar4,DAT_091ac068);
      uStack_48 = puStack_60;
      local_50 = local_68;
      local_40 = local_58;
      local_68 = 0;
      puStack_60 = &local_50;
LAB_041dd208:
      uVar5 = FUN_071bd28c(&local_50,DAT_091a27d0);
      plVar3 = local_40;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(plVar3,0);
        if ((uVar5 & 1) != 0) {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((char)plVar3[0x12] == '\0') {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x2b0));
            lVar4 = DAT_091ac050;
            lVar6 = *(long *)(param_1 + 0x50);
            if (lVar6 != 0) {
              lVar7 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar8 = plVar3;
                  thunk_FUN_03f5d7b8(puVar8,plVar3);
                }
                else {
                  FUN_057e0c68(lVar6,plVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_041dd208;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        goto LAB_041dd208;
      }
      FUN_071bd288(&local_50,DAT_091a27c8);
    }
    return;
  }
LAB_041dd2f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

