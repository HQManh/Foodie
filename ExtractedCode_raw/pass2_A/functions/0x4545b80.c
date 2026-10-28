// rea decompile_all
// name: DG.Tweening.ShortcutExtensions$$LookAt
// address: 0x4545b80
// body: available
// range: 0x4545b80-0x4545dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4545dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_ShortcutExtensions__LookAt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,ulong param_7,undefined8 param_8,uint param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong local_90;
  undefined8 uStack_88;
  
  local_90 = param_7;
  uStack_88 = param_8;
  if ((DAT_09518738 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e08);
    FUN_03f5c2a4(&DAT_09175e58);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc048);
    FUN_03f5c2a4(&DAT_091b7648);
    FUN_03f5c2a4(&DAT_091b7650);
    FUN_03f5c2a4(&DAT_091dbf90);
    FUN_03f5c2a4(&DAT_091efd88);
    FUN_03f5c2a4(&DAT_091efd90);
    FUN_03f5c2a4(&DAT_091946a8);
    DAT_09518738 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091946a8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    *puVar6 = param_5;
    thunk_FUN_03f5d7b8(puVar6,param_5);
    uVar3 = thunk_FUN_03f9944c(DAT_09175e08);
    FUN_06dfaf98(uVar3,lVar2,DAT_091efd88,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09175e58);
    FUN_06dfc024(uVar4,lVar2,DAT_091efd90,0);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = param_2;
    uVar9 = param_3;
    uVar3 = DG_Tweening_DOTween__To(param_1,param_2,param_3,param_4,uVar3,uVar4);
    uVar3 = FUN_04d9642c(uVar3,*puVar6,DAT_091dbf90);
    lVar2 = FUN_04b265cc(uVar3,1,DAT_091cc048);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x14c) = param_6;
      if ((param_7 & 0xff) == 0) {
        if (DAT_09515faa == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
        }
        lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
        uVar7 = *(undefined4 *)(lVar5 + 0x18);
        uVar8 = *(undefined4 *)(lVar5 + 0x1c);
        uVar9 = *(undefined4 *)(lVar5 + 0x20);
      }
      else {
        uVar7 = FUN_05c3a634(&local_90,DAT_091b7650);
      }
      *(undefined4 *)(lVar2 + 0x150) = uVar7;
      *(undefined4 *)(lVar2 + 0x154) = uVar8;
      *(undefined4 *)(lVar2 + 0x158) = uVar9;
      bVar1 = (param_9 & 1) != 0;
      if (bVar1) {
        *(undefined4 *)(lVar2 + 0x160) = param_1;
        *(undefined4 *)(lVar2 + 0x164) = param_2;
        *(undefined4 *)(lVar2 + 0x168) = param_3;
      }
      *(bool *)(lVar2 + 0x15c) = bVar1;
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

