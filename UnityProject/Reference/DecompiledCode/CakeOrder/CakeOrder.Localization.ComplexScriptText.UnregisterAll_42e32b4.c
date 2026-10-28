// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText$$UnregisterAll
// address: 0x42e32b4
// body: available
// range: 0x42e32b4-0x42e35c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e35b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e35b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e35bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e35c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042e351c) */
/* WARNING: Removing unreachable block (ram,0x042e35c0) */

void CakeOrder_Localization_ComplexScriptText__UnregisterAll(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  undefined4 local_54;
  
  if ((DAT_09517442 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_091a07c0);
    FUN_03f5c2a4(&DAT_091a07d0);
    FUN_03f5c2a4(&DAT_091a46a0);
    FUN_03f5c2a4(&DAT_091a46a8);
    FUN_03f5c2a4(&DAT_091a46b0);
    FUN_03f5c2a4(&DAT_091a8758);
    FUN_03f5c2a4(&DAT_091a8768);
    FUN_03f5c2a4(&DAT_091b0ad8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517442 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_54 = 0;
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    FUN_053ec0b0(&local_98,lVar3,DAT_091a8768);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar4 = FUN_071bb7b4(&local_80,DAT_091a46a8), plVar2 = local_70, (uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(plVar2,0,0);
      if ((uVar4 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = plVar2 + 0x1d;
        lVar3 = *plVar6;
        if (*(int *)(DAT_09182870 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar5 = *(long **)(DAT_09182870 + 0xb8);
        if (lVar3 == *plVar5) {
LAB_042e3478:
          *plVar6 = 0;
          thunk_FUN_03f5d7b8(plVar6,0);
        }
        else {
          lVar3 = *plVar6;
          if (*(int *)(DAT_09182870 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar5 = *(long **)(DAT_09182870 + 0xb8);
          }
          if (lVar3 == plVar5[1]) goto LAB_042e3478;
        }
        if (*(int *)(DAT_09182870 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x38);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = FUN_06fcf8e8(lVar3,plVar2,&local_54,DAT_091a07d0);
        if ((uVar4 & 1) != 0) {
          TMPro_TMP_Text__set_isRightToLeftText(plVar2,0,0);
          TMPro_TMP_Text__set_horizontalAlignment(plVar2,local_54,0);
        }
        (**(code **)(*plVar2 + 0x7d8))(plVar2,1,1,*(undefined8 *)(*plVar2 + 0x7e0));
      }
    }
    FUN_071bb7b0(puStack_90,DAT_091a46a0);
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x30);
    if (lVar3 != 0) {
      FUN_053ebbdc(lVar3,DAT_091a8758);
      lVar3 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x38);
      if (lVar3 != 0) {
        FUN_06fcdf48(lVar3,DAT_091a07c0);
        lVar3 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x40);
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

