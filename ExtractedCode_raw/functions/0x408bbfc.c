// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather.<GetFeatherKeys>d__28$$MoveNext
// address: 0x408bbfc
// body: available
// range: 0x408bbfc-0x408bddf inclusive
// range: 0x408be30-0x408be43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408bdd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408bdd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408bddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408be40 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 TrungKien_UI_NewFearther_UIPopupNewFeather_<GetFeatherKeys>d__28__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long *plStack_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_09515cc3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb48);
    FUN_03f5c2a4(&DAT_091a67e8);
    FUN_03f5c2a4(&DAT_091a67f0);
    FUN_03f5c2a4(&DAT_091a9258);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515cc3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_28 = &local_18;
  local_30 = 0;
  if (iVar1 == 2) {
LAB_0408bd60:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    uVar3 = FUN_07275820(param_1 + 0x30,DAT_091a67e8);
    if ((uVar3 & 1) == 0) {
      TrungKien_UI_NewFearther_UIPopupNewFeather_<GetFeatherKeys>d__28__<>m__Finally1();
      uVar2 = 0;
      *(undefined8 *)(local_18 + 0x38) = 0;
      *(undefined8 *)(local_18 + 0x40) = 0;
      *(undefined8 *)(local_18 + 0x30) = 0;
    }
    else {
      *(undefined8 *)(local_18 + 0x18) = *(undefined8 *)(local_18 + 0x40);
      thunk_FUN_03f5d7b8();
      uVar2 = 1;
      *(undefined4 *)(local_18 + 0x10) = 2;
    }
  }
  else {
    if (iVar1 == 1) {
      lVar4 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(undefined8 *)(lVar4 + 0xc0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(lVar4 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
        uVar2 = 0;
        if (lVar4 == 0) goto LAB_0408bdbc;
        lVar4 = FUN_06fd811c(lVar4,DAT_0919fb48);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_055eefe0(&local_68,lVar4,DAT_091a9258);
        uStack_48 = uStack_60;
        local_50 = local_68;
        local_40 = local_58;
        *(undefined8 *)(local_18 + 0x38) = uStack_60;
        *(undefined8 *)(local_18 + 0x30) = local_68;
        *(undefined8 *)(local_18 + 0x40) = local_58;
        thunk_FUN_03f5d7b8(local_18 + 0x30,0);
        param_1 = local_18;
        goto LAB_0408bd60;
      }
    }
    else if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(DAT_09535468 + 0xb8);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
      uVar2 = 1;
      *(undefined4 *)(local_18 + 0x10) = 1;
      goto LAB_0408bdbc;
    }
    uVar2 = 0;
  }
LAB_0408bdbc:
  lVar4 = local_30;
  if (local_30 == 0) {
    return uVar2;
  }
  FUN_039afb60(&plStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar4);
}

