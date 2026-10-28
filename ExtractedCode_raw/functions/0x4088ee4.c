// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$Setup
// address: 0x4088ee4
// body: available
// range: 0x4088ee4-0x40890bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40890bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 TrungKien_UI_NewFearther_UIPopupNewFeather__Setup(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_28;
  
  if ((DAT_09515ca9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919fb38);
    FUN_03f5c2a4(&DAT_091ae9c0);
    FUN_03f5c2a4(&DAT_091ae9c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092144b0);
    DAT_09515ca9 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
LAB_04089038:
    uVar8 = System_String__Concat(DAT_092144b0,param_2,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar8,0);
    return 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x58);
    if ((lVar5 == 0) ||
       (uVar4 = FUN_06fd9fbc(lVar5,param_2,&local_28,DAT_0919fb38), (uVar4 & 1) == 0))
    goto LAB_04089038;
    lVar5 = *(long *)(param_1 + 0x118);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        lVar5 = *(long *)(param_1 + 0x118);
        if (lVar5 == 0) goto LAB_040890bc;
      }
      lVar3 = DAT_091ae9c0;
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = local_28;
          thunk_FUN_03f5d7b8(puVar7);
        }
        else {
          FUN_057e0c68(lVar5,local_28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        *(undefined1 *)(param_1 + 0x124) = 1;
        TrungKien_UI_NewFearther_UIPopupNewFeather__ShowFeatherAt(param_1,0);
        return 1;
      }
    }
  }
LAB_040890bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

