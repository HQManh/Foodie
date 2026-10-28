// rea decompile_all
// name: TrungKien.UI.NewFearther.UINextFeatherButton$$SetNewLabel
// address: 0x40876ac
// body: available
// range: 0x40876ac-0x4087837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4087834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKien_UI_NewFearther_UINextFeatherButton__SetNewLabel(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = &local_a0;
  if ((DAT_09515ca0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ca0 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x20), lVar3 != 0)) {
    plVar5 = (long *)(param_1 + 0x90);
    if (*plVar5 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 == 0) {
        lVar3 = **(long **)(DAT_09535468 + 0xb8);
      }
      *(long *)(param_1 + 0x90) = lVar3;
      thunk_FUN_03f5d7b8(plVar5);
      *(undefined8 *)(param_1 + 0x98) = uVar4;
    }
    if ((param_2 & 1) == 0) {
      uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x90),0);
      lVar3 = *(long *)(param_1 + 0x70);
      if ((uVar1 & 1) == 0) {
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0x20);
          UnityEngine_Localization_Tables_TableEntryReference__op_Implicit(&local_48,*plVar5,0);
          if (lVar3 != 0) {
            puVar2 = &local_80;
            uStack_78 = uStack_40;
            local_80 = local_48;
            local_70 = local_38;
LAB_04087818:
            UnityEngine_Localization_LocalizedReference__set_TableEntryReference(lVar3,puVar2,0);
            return;
          }
        }
      }
      else if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x20);
        UnityEngine_Localization_Tables_TableEntryReference__op_Implicit
                  (&local_48,*(undefined8 *)(param_1 + 0x98),0);
        if (lVar3 != 0) {
          uStack_98 = uStack_40;
          local_a0 = local_48;
          local_90 = local_38;
          goto LAB_04087818;
        }
      }
    }
    else if (*(long *)(param_1 + 0x70) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x20);
      UnityEngine_Localization_Tables_TableEntryReference__op_Implicit
                (&local_48,*(undefined8 *)(param_1 + 0x78),0);
      if (lVar3 != 0) {
        puVar2 = &local_60;
        uStack_58 = uStack_40;
        local_60 = local_48;
        local_50 = local_38;
        goto LAB_04087818;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

