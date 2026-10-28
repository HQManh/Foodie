// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$ShowFeatherAt
// address: 0x40890c0
// body: available
// range: 0x40890c0-0x40892ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40892e8 to 0x408a4ec TrungKien.UI.NewFearther.UIPopupNewFeather$$UpdateButtons (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40892ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKien_UI_NewFearther_UIPopupNewFeather__ShowFeatherAt(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09515cbc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e9a8);
    FUN_03f5c2a4(&DAT_0919e9b8);
    FUN_03f5c2a4(&DAT_091ae9d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5ee8);
    FUN_03f5c2a4(&DAT_09189438);
    DAT_09515cbc = 1;
  }
  *(undefined4 *)(param_1 + 0x120) = param_2;
  if (*(long *)(param_1 + 0x118) != 0) {
    lVar1 = FUN_057e0998(*(long *)(param_1 + 0x118),param_2,DAT_091ae9d8);
    TrungKien_UI_NewFearther_UIPopupNewFeather__CollectCurrentFeather(param_1);
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_040892ec;
        uVar2 = FUN_06fd9fbc(*(long *)(param_1 + 0xf8),*(undefined8 *)(lVar1 + 0x10),param_1 + 0x100
                             ,DAT_0919e9b8);
        if ((uVar2 & 1) == 0) {
          uVar6 = *(undefined8 *)(lVar1 + 0x10);
          uVar5 = thunk_FUN_03f9944c(DAT_09189438);
          TrungKienPack_PoolCtrlObject___ctor(uVar5,uVar6);
          *(undefined8 *)(param_1 + 0x100) = uVar5;
          thunk_FUN_03f5d7b8(param_1 + 0x100,uVar5);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_040892ec;
          FUN_06fd8454(*(long *)(param_1 + 0xf8),*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(param_1 + 0x100),DAT_0919e9a8);
        }
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_040892ec;
        uVar5 = FUN_04ca4844(*(long *)(param_1 + 0x100),*(undefined8 *)(param_1 + 200),DAT_091d5ee8)
        ;
        *(undefined8 *)(param_1 + 0x108) = uVar5;
        thunk_FUN_03f5d7b8(param_1 + 0x108,uVar5);
        if (*(long *)(param_1 + 0x108) == 0) goto LAB_040892ec;
        lVar3 = TrungKienPack_PoolingElement__get_TF();
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (lVar3 == 0) goto LAB_040892ec;
        lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar3,0);
      }
      plVar7 = *(long **)(param_1 + 0xd0);
      uVar5 = TrungKien_UI_NewFearther_NewFeatherConfig__get_LocalizedName(lVar1);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
        plVar7 = *(long **)(param_1 + 0xd8);
        uVar5 = TrungKien_UI_NewFearther_NewFeatherConfig__get_LocalizedDesc(lVar1);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
          TrungKien_UI_NewFearther_UIPopupNewFeather__UpdateButtons(param_1);
          return;
        }
      }
    }
  }
LAB_040892ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

