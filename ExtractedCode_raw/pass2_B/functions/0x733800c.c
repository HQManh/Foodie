// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$Awake
// address: 0x733800c
// body: available
// range: 0x733800c-0x73392bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73383f4 to 0x8662bb0 UnityEngine.Object$$Destroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7339278 to 0x85eed1c UnityEngine.Application$$add_logMessageReceivedThreaded (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733929c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73392a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73392a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73392b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73392b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__Awake
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09520650 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174628);
    FUN_03f5c2a4(&DAT_09174c80);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_0919b130);
    FUN_03f5c2a4(&DAT_09175890);
    FUN_03f5c2a4(&DAT_091c5648);
    FUN_03f5c2a4(&DAT_091c52f0);
    FUN_03f5c2a4(&DAT_091c53a0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09183678);
    FUN_03f5c2a4(&DAT_091c7d60);
    FUN_03f5c2a4(&DAT_091c7d68);
    FUN_03f5c2a4(&DAT_091c7d70);
    FUN_03f5c2a4(&DAT_091c7d78);
    FUN_03f5c2a4(&DAT_091c7d80);
    FUN_03f5c2a4(&DAT_091c7d88);
    FUN_03f5c2a4(&DAT_091c7d90);
    FUN_03f5c2a4(&DAT_091c7d98);
    FUN_03f5c2a4(&DAT_091c7da0);
    FUN_03f5c2a4(&DAT_091c7da8);
    FUN_03f5c2a4(&DAT_091c7db8);
    FUN_03f5c2a4(&DAT_091c7dc0);
    FUN_03f5c2a4(&DAT_091c7dd8);
    FUN_03f5c2a4(&DAT_091c7de0);
    FUN_03f5c2a4(&DAT_091c7de8);
    FUN_03f5c2a4(&DAT_091c7d58);
    FUN_03f5c2a4(&DAT_091c7df0);
    FUN_03f5c2a4(&DAT_0919c9a0);
    FUN_03f5c2a4(&DAT_09176128);
    FUN_03f5c2a4(&DAT_091a1c28);
    FUN_03f5c2a4(&DAT_091a1ba8);
    FUN_03f5c2a4(&DAT_091a1b60);
    FUN_03f5c2a4(&DAT_091a1c40);
    FUN_03f5c2a4(&DAT_09177260);
    FUN_03f5c2a4(&DAT_09177268);
    FUN_03f5c2a4(&DAT_09177278);
    FUN_03f5c2a4(&DAT_091cd880);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091b0d68);
    FUN_03f5c2a4(&DAT_091abce0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917bec0);
    FUN_03f5c2a4(&DAT_0917ce30);
    FUN_03f5c2a4(&DAT_0918e4f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09191c88);
    FUN_03f5c2a4(&DAT_091893a8);
    FUN_03f5c2a4(&DAT_0917df98);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_09180558);
    FUN_03f5c2a4(&DAT_091bafc8);
    FUN_03f5c2a4(&DAT_091bafa8);
    FUN_03f5c2a4(&DAT_0917e850);
    FUN_03f5c2a4(&DAT_0917e848);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    DAT_09520650 = 1;
  }
  if (DAT_0952068d == '\0') {
    FUN_03f5c2a4(&DAT_09183690);
    DAT_0952068d = '\x01';
  }
  uVar9 = **(undefined8 **)(DAT_09183690 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar4 & 1) == 0) {
    if (DAT_0952068f == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068f = '\x01';
    }
    **(long **)(DAT_09183690 + 0xb8) = param_3;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183690 + 0xb8),param_3);
    if (*(char *)(param_3 + 0x28) != '\0') {
      uVar9 = UnityEngine_Component__get_gameObject(param_3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__DontDestroyOnLoad(uVar9,0);
    }
  }
  else {
    if (DAT_0952068d == '\0') {
      FUN_03f5c2a4(&DAT_09183690);
      DAT_0952068d = '\x01';
    }
    uVar9 = **(undefined8 **)(DAT_09183690 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar9,param_3,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = UnityEngine_Component__get_gameObject(param_3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar9,0);
      return;
    }
  }
  uVar9 = thunk_FUN_03f9944c(DAT_0917e848);
  FUN_061a12f4(uVar9,0x40,DAT_091bafa8);
  *(undefined8 *)(param_3 + 0x2c0) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x2c0,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917e850);
  FUN_061a12f4(uVar9,0x10,DAT_091bafc8);
  *(undefined8 *)(param_3 + 0x2c8) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x2c8,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917ce30);
  FUN_057e0478(uVar9,8,DAT_091b0d68);
  *(undefined8 *)(param_3 + 0x270) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x270,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917bec0);
  FUN_057e0478(uVar9,8,DAT_091abce0);
  *(undefined8 *)(param_3 + 0x280) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x280,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796990(uVar9,8,DAT_091adc80);
  *(undefined8 *)(param_3 + 0x288) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x288,uVar9);
  iVar1 = *(int *)(param_3 + 0x58);
  if (0xfff < iVar1) {
    iVar1 = 0x1000;
  }
  if (iVar1 < 0x11) {
    iVar1 = 0x10;
  }
  uVar9 = thunk_FUN_03f9944c(DAT_09177278);
  FUN_070ddab0(uVar9,iVar1,DAT_091a1c28);
  *(undefined8 *)(param_3 + 0x250) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x250,uVar9);
  uVar11 = *(undefined4 *)(param_3 + 0x60);
  uVar9 = thunk_FUN_03f9944c(DAT_09175890);
  FUN_06c66694(uVar9,uVar11,DAT_0919b130);
  *(undefined8 *)(param_3 + 0x2d8) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x2d8,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_09188ac8);
  System_Object___ctor(uVar9,0);
  *(undefined8 *)(param_3 + 0x260) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x260,uVar9);
  uVar9 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(uVar9,0x400,0);
  *(undefined8 *)(param_3 + 0x2f0) = uVar9;
  thunk_FUN_03f5d7b8(param_3 + 0x2f0,uVar9);
  plVar5 = (long *)UnityEngine_Component__get_transform(param_3,0);
  lVar6 = DAT_09189c98;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_3 + 0x110) = 0;
  }
  else if ((*plVar5 != DAT_09189c98) || (*(long **)(param_3 + 0x110) = plVar5, *plVar5 != lVar6))
  goto LAB_073392a4;
  thunk_FUN_03f5d7b8(param_3 + 0x110,plVar5);
  if (*(long *)(param_3 + 0x1b0) != 0) {
    plVar5 = (long *)UnityEngine_Component__get_transform(*(long *)(param_3 + 0x1b0),0);
    lVar6 = DAT_09189c98;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_3 + 0x1b8) = 0;
    }
    else if ((*plVar5 != DAT_09189c98) || (*(long **)(param_3 + 0x1b8) = plVar5, *plVar5 != lVar6))
    goto LAB_073392a4;
    thunk_FUN_03f5d7b8((long *)(param_3 + 0x1b8),plVar5);
    lVar6 = *(long *)(param_3 + 0x1b8);
    if (lVar6 != 0) {
      uVar11 = UnityEngine_RectTransform__get_sizeDelta(lVar6,0);
      uVar9 = DAT_09180558;
      *(undefined4 *)(param_3 + 0x1c0) = uVar11;
      *(undefined4 *)(param_3 + 0x1c4) = param_2;
      lVar6 = FUN_03f5c394(uVar9,5);
      plVar5 = (long *)(param_3 + 0xa0);
      *plVar5 = lVar6;
      thunk_FUN_03f5d7b8(plVar5,lVar6);
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) {
LAB_073392a0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(param_3 + 0x88);
        thunk_FUN_03f5d7b8();
        lVar6 = *(long *)(param_3 + 0xa0);
        if (lVar6 == 0) goto LAB_0733929c;
        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_073392a0;
        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_3 + 0x90);
        thunk_FUN_03f5d7b8();
        lVar6 = *(long *)(param_3 + 0xa0);
        if (lVar6 == 0) goto LAB_0733929c;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_073392a0;
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_3 + 0x98);
        thunk_FUN_03f5d7b8();
        lVar6 = *(long *)(param_3 + 0xa0);
        if (lVar6 == 0) goto LAB_0733929c;
        if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_073392a0;
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(param_3 + 0x98);
        thunk_FUN_03f5d7b8();
        lVar6 = *(long *)(param_3 + 0xa0);
        if (lVar6 == 0) goto LAB_0733929c;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_073392a0;
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_3 + 0x98);
        thunk_FUN_03f5d7b8();
        plVar5 = *(long **)(param_3 + 0x148);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(param_3 + 0xe8),*(undefined4 *)(param_3 + 0xec),
                     *(undefined4 *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4),plVar5,
                     *(undefined8 *)(*plVar5 + 0x2b0));
          plVar5 = *(long **)(param_3 + 0x150);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x2a8))
                      (*(undefined4 *)(param_3 + 0xe8),*(undefined4 *)(param_3 + 0xec),
                       *(undefined4 *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4),plVar5,
                       *(undefined8 *)(*plVar5 + 0x2b0));
            plVar5 = *(long **)(param_3 + 0x158);
            if (plVar5 != (long *)0x0) {
              uVar11 = *(undefined4 *)(param_3 + 0xec);
              (**(code **)(*plVar5 + 0x2a8))
                        (*(undefined4 *)(param_3 + 0xe8),uVar11,*(undefined4 *)(param_3 + 0xf0),
                         *(undefined4 *)(param_3 + 0xf4),plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
              if (*(long *)(param_3 + 400) != 0) {
                lVar6 = 0xb0;
                if (*(char *)(param_3 + 0x30) != '\0') {
                  lVar6 = 0xa8;
                }
                UnityEngine_UI_Image__set_sprite
                          (*(long *)(param_3 + 400),*(undefined8 *)(param_3 + lVar6),0);
                uVar9 = thunk_FUN_03f9944c(DAT_09177260);
                FUN_070dd144(uVar9,0x80,DAT_091a1b60);
                *(undefined8 *)(param_3 + 0x210) = uVar9;
                thunk_FUN_03f5d7b8(param_3 + 0x210,uVar9);
                uVar9 = thunk_FUN_03f9944c(DAT_09183678);
                IngameDebugConsole_DebugLogEntryContentEqualityComparer___ctor();
                uVar7 = thunk_FUN_03f9944c(DAT_09176128);
                FUN_06fd7700(uVar7,0x80,uVar9,DAT_0919c9a0);
                *(undefined8 *)(param_3 + 0x220) = uVar7;
                thunk_FUN_03f5d7b8(param_3 + 0x220,uVar7);
                uVar9 = thunk_FUN_03f9944c(DAT_09177260);
                FUN_070dd144(uVar9,0x100,DAT_091a1b60);
                *(undefined8 *)(param_3 + 0x228) = uVar9;
                thunk_FUN_03f5d7b8(param_3 + 0x228,uVar9);
                uVar9 = thunk_FUN_03f9944c(DAT_09177260);
                FUN_070dd144(uVar9,0x100,DAT_091a1b60);
                *(undefined8 *)(param_3 + 0x238) = uVar9;
                thunk_FUN_03f5d7b8(param_3 + 0x238,uVar9);
                if (*(char *)(param_3 + 0x4d) != '\0') {
                  uVar9 = thunk_FUN_03f9944c(DAT_09177268);
                  FUN_070dc80c(uVar9,0x80,DAT_091a1ba8);
                  *(undefined8 *)(param_3 + 0x218) = uVar9;
                  thunk_FUN_03f5d7b8(param_3 + 0x218,uVar9);
                  uVar9 = thunk_FUN_03f9944c(DAT_09177268);
                  FUN_070dc80c(uVar9,0x100,DAT_091a1ba8);
                  *(undefined8 *)(param_3 + 0x230) = uVar9;
                  thunk_FUN_03f5d7b8(param_3 + 0x230,uVar9);
                  uVar9 = thunk_FUN_03f9944c(DAT_09177268);
                  FUN_070dc80c(uVar9,0x100,DAT_091a1ba8);
                  *(undefined8 *)(param_3 + 0x240) = uVar9;
                  thunk_FUN_03f5d7b8(param_3 + 0x240,uVar9);
                  if (*(long *)(param_3 + 0x250) == 0) goto LAB_0733929c;
                  uVar3 = FUN_070dd9f0(*(long *)(param_3 + 0x250),DAT_091a1c40);
                  uVar9 = thunk_FUN_03f9944c(DAT_09177268);
                  FUN_070dc80c(uVar9,uVar3,DAT_091a1ba8);
                  *(undefined8 *)(param_3 + 600) = uVar9;
                  thunk_FUN_03f5d7b8(param_3 + 600,uVar9);
                }
                if ((*(long *)(param_3 + 0x78) != 0) &&
                   (lVar6 = *(long *)(*(long *)(param_3 + 0x78) + 0x20), lVar6 != 0)) {
                  lVar10 = *(long *)(param_3 + 0x1c8);
                  uVar9 = *(undefined8 *)(param_3 + 0x238);
                  uVar7 = *(undefined8 *)(param_3 + 0x240);
                  UnityEngine_RectTransform__get_sizeDelta(lVar6,0);
                  if (lVar10 != 0) {
                    IngameDebugConsole_DebugLogRecycledListView__Initialize
                              (uVar11,lVar10,param_3,uVar9,uVar7);
                    if (*(float *)(param_3 + 0x34) < 100.0) {
                      *(undefined4 *)(param_3 + 0x34) = 0x42c80000;
                    }
                    fVar14 = 200.0;
                    if (*(float *)(param_3 + 0x2c) < 200.0) {
                      *(undefined4 *)(param_3 + 0x2c) = 0x43480000;
                    }
                    if (*(char *)(param_3 + 0x31) == '\0') {
                      if (((*(long *)(param_3 + 400) == 0) ||
                          (lVar6 = FUN_04a6a6d8(*(long *)(param_3 + 400),DAT_091c5648), lVar6 == 0))
                         || (plVar5 = (long *)UnityEngine_Component__get_transform(lVar6,0),
                            plVar5 == (long *)0x0)) goto LAB_0733929c;
                      if (*plVar5 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c8d0(plVar5);
                      }
                      UnityEngine_RectTransform__get_anchorMin(plVar5,0);
                      UnityEngine_RectTransform__set_anchorMin(0,plVar5,0);
                      UnityEngine_RectTransform__get_anchorMax(plVar5,0);
                      UnityEngine_RectTransform__set_anchorMax(0,plVar5,0);
                      UnityEngine_RectTransform__get_pivot(plVar5,0);
                      UnityEngine_RectTransform__set_pivot(0,plVar5,0);
                      if ((*(long *)(param_3 + 0x128) == 0) ||
                         (plVar8 = (long *)UnityEngine_Component__get_transform
                                                     (*(long *)(param_3 + 0x128),0),
                         plVar8 == (long *)0x0)) goto LAB_0733929c;
                      if (*plVar8 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c8d0(plVar8);
                      }
                      fVar12 = (float)UnityEngine_RectTransform__get_anchoredPosition(plVar8,0);
                      fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta(plVar5,0);
                      UnityEngine_RectTransform__set_anchoredPosition
                                (fVar12 + fVar13,fVar14 + 0.0,plVar8,0);
                    }
                    if (*(char *)(param_3 + 0x40) == '\0') {
                      *(undefined8 *)(param_3 + 0x178) = 0;
                      thunk_FUN_03f5d7b8(param_3 + 0x178,0);
                      if ((*(long *)(param_3 + 0x180) == 0) ||
                         (lVar6 = UnityEngine_Component__get_gameObject
                                            (*(long *)(param_3 + 0x180),0), lVar6 == 0))
                      goto LAB_0733929c;
                      UnityEngine_GameObject__SetActive(lVar6,0,0);
                      if ((*(long *)(param_3 + 0x188) == 0) ||
                         (lVar6 = UnityEngine_Component__get_gameObject
                                            (*(long *)(param_3 + 0x188),0), lVar6 == 0))
                      goto LAB_0733929c;
                      UnityEngine_GameObject__SetActive(lVar6,0,0);
                    }
                    else {
                      if ((*(long *)(param_3 + 0x178) == 0) ||
                         (lVar6 = FUN_04a6a14c(*(long *)(param_3 + 0x178),DAT_091c53a0), lVar6 == 0)
                         ) goto LAB_0733929c;
                      lVar6 = *(long *)(lVar6 + 0x148);
                      uVar9 = thunk_FUN_03f9944c(DAT_0917f6f0);
                      FUN_06478c04(uVar9,param_3,DAT_091c7dd8,0);
                      if (lVar6 == 0) goto LAB_0733929c;
                      FUN_0647f878(lVar6,uVar9,DAT_091be128);
                    }
                    if ((*(long *)(param_3 + 0x148) != 0) &&
                       (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_3 + 0x148),0),
                       lVar6 != 0)) {
                      UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)(param_3 + 0x49),0);
                      if ((*(long *)(param_3 + 0x150) != 0) &&
                         (lVar6 = UnityEngine_Component__get_gameObject
                                            (*(long *)(param_3 + 0x150),0), lVar6 != 0)) {
                        UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)(param_3 + 0x4a),0);
                        if (*(long *)(param_3 + 0x158) != 0) {
                          lVar6 = UnityEngine_Component__get_gameObject
                                            (*(long *)(param_3 + 0x158),0);
                          if (*(char *)(param_3 + 0x4b) == '\0') {
                            bVar2 = *(char *)(param_3 + 0x4c) != '\0';
                          }
                          else {
                            bVar2 = true;
                          }
                          if (lVar6 != 0) {
                            UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
                            if ((*(long *)(param_3 + 0x120) != 0) &&
                               (lVar6 = UnityEngine_Component__get_gameObject
                                                  (*(long *)(param_3 + 0x120),0), lVar6 != 0)) {
                              uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
                              if ((uVar4 & 1) != 0) {
                                if ((*(long *)(param_3 + 0x120) == 0) ||
                                   (lVar6 = UnityEngine_Component__get_gameObject
                                                      (*(long *)(param_3 + 0x120),0), lVar6 == 0))
                                goto LAB_0733929c;
                                UnityEngine_GameObject__SetActive(lVar6,0,0);
                              }
                              lVar6 = *(long *)(param_3 + 0x128);
                              if (lVar6 != 0) {
                                uVar7 = *(undefined8 *)(lVar6 + 0x150);
                                uVar9 = thunk_FUN_03f9944c(DAT_09191c88);
                                UnityEngine_UI_InputField_OnValidateInput___ctor
                                          (uVar9,param_3,DAT_091c7da0,0);
                                plVar5 = (long *)System_Delegate__Combine(uVar7,uVar9,0);
                                if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09191c88)) {
LAB_073392a4:
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c8d0(plVar5);
                                }
                                UnityEngine_UI_InputField__set_onValidateInput(lVar6,plVar5,0);
                                if (*(long *)(param_3 + 0x128) != 0) {
                                  lVar6 = *(long *)(*(long *)(param_3 + 0x128) + 0x148);
                                  uVar9 = thunk_FUN_03f9944c(DAT_0917f6f0);
                                  FUN_06478c04(uVar9,param_3,DAT_091c7d90,0);
                                  if (lVar6 != 0) {
                                    FUN_0647f878(lVar6,uVar9,DAT_091be128);
                                    if (*(long *)(param_3 + 0x128) != 0) {
                                      lVar6 = *(long *)(*(long *)(param_3 + 0x128) + 0x140);
                                      uVar9 = thunk_FUN_03f9944c(DAT_0917f6f0);
                                      FUN_06478c04(uVar9,param_3,DAT_091c7d98,0);
                                      if (lVar6 != 0) {
                                        FUN_0647f878(lVar6,uVar9,DAT_091be128);
                                        if (*(long *)(param_3 + 0x130) != 0) {
                                          lVar6 = *(long *)(*(long *)(param_3 + 0x130) + 0x100);
                                          uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                          UnityEngine_Events_UnityAction___ctor
                                                    (uVar9,param_3,DAT_091c7d88,0);
                                          if (lVar6 != 0) {
                                            UnityEngine_Events_UnityEvent__AddListener
                                                      (lVar6,uVar9,0);
                                            if (*(long *)(param_3 + 0x138) != 0) {
                                              lVar6 = *(long *)(*(long *)(param_3 + 0x138) + 0x100);
                                              uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                              UnityEngine_Events_UnityAction___ctor
                                                        (uVar9,param_3,DAT_091c7d60,0);
                                              if (lVar6 != 0) {
                                                UnityEngine_Events_UnityEvent__AddListener
                                                          (lVar6,uVar9,0);
                                                if ((*(long *)(param_3 + 0x140) != 0) &&
                                                   (lVar6 = FUN_04a6a14c(*(long *)(param_3 + 0x140),
                                                                         DAT_091c52f0), lVar6 != 0))
                                                {
                                                  lVar6 = *(long *)(lVar6 + 0x100);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (uVar9,param_3,DAT_091c7d68,0);
                                                  if (lVar6 != 0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (lVar6,uVar9,0);
                                                    if ((*(long *)(param_3 + 0x148) != 0) &&
                                                       (lVar6 = FUN_04a6a14c(*(long *)(param_3 +
                                                                                      0x148),
                                                                             DAT_091c52f0),
                                                       lVar6 != 0)) {
                                                      lVar6 = *(long *)(lVar6 + 0x100);
                                                      uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                                      UnityEngine_Events_UnityAction___ctor
                                                                (uVar9,param_3,DAT_091c7d78,0);
                                                      if (lVar6 != 0) {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (lVar6,uVar9,0);
                                                        if ((*(long *)(param_3 + 0x150) != 0) &&
                                                           (lVar6 = FUN_04a6a14c(*(long *)(param_3 +
                                                                                          0x150),
                                                                                 DAT_091c52f0),
                                                           lVar6 != 0)) {
                                                          lVar6 = *(long *)(lVar6 + 0x100);
                                                          uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                                          UnityEngine_Events_UnityAction___ctor
                                                                    (uVar9,param_3,DAT_091c7d80,0);
                                                          if (lVar6 != 0) {
                                                                                                                        
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (lVar6,uVar9,0);
                                                  if ((*(long *)(param_3 + 0x158) != 0) &&
                                                     (lVar6 = FUN_04a6a14c(*(long *)(param_3 + 0x158
                                                                                    ),DAT_091c52f0),
                                                     lVar6 != 0)) {
                                                    lVar6 = *(long *)(lVar6 + 0x100);
                                                    uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (uVar9,param_3,DAT_091c7d70,0);
                                                    if (lVar6 != 0) {
                                                      UnityEngine_Events_UnityEvent__AddListener
                                                                (lVar6,uVar9,0);
                                                      if ((*(long *)(param_3 + 0x198) != 0) &&
                                                         (lVar6 = FUN_04b7c324(*(long *)(param_3 +
                                                                                        0x198),
                                                                               DAT_091cd880),
                                                         lVar6 != 0)) {
                                                        lVar6 = *(long *)(lVar6 + 0x100);
                                                        uVar9 = thunk_FUN_03f9944c(DAT_0918c678);
                                                        UnityEngine_Events_UnityAction___ctor
                                                                  (uVar9,param_3,DAT_091c7d58,0);
                                                        if (lVar6 != 0) {
                                                          UnityEngine_Events_UnityEvent__AddListener
                                                                    (lVar6,uVar9,0);
                                                          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                                                            FUN_03f5c424();
                                                          }
                                                          uVar9 = System_DateTime__get_Now(0);
                                                          uVar7 = System_DateTime__get_UtcNow(0);
                                                          uVar9 = System_DateTime__op_Subtraction
                                                                            (uVar9,uVar7,0);
                                                          *(undefined8 *)(param_3 + 0x2f8) = uVar9;
                                                          uVar9 = DAT_091893a8;
                                                          *(undefined8 *)(param_3 + 0x310) = 0;
                                                          *(undefined8 *)(param_3 + 0x308) = 0;
                                                          uVar9 = thunk_FUN_03f9944c(uVar9);
                                                                                                                    
                                                  UnityEngine_EventSystems_PointerEventData___ctor
                                                            (uVar9,0,0);
                                                  *(undefined8 *)(param_3 + 0x318) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 0x318,uVar9);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_09174628);
                                                  FUN_070a8c30(uVar9,param_3,DAT_091c7da8,0);
                                                  *(undefined8 *)(param_3 + 800) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 800,uVar9);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_09174628);
                                                  FUN_070a8c30(uVar9,param_3,DAT_091c7dc0,0);
                                                  *(undefined8 *)(param_3 + 0x328) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 0x328,uVar9);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0917df98);
                                                  FUN_05d78cfc(uVar9,param_3,DAT_091c7de0,0);
                                                  *(undefined8 *)(param_3 + 0x330) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 0x330,uVar9);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0917df98);
                                                  FUN_05d78cfc(uVar9,param_3,DAT_091c7de8,0);
                                                  *(undefined8 *)(param_3 + 0x338) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 0x338,uVar9);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_09174c80);
                                                  FUN_071ccc78(uVar9,param_3,DAT_091c7df0,0);
                                                  *(undefined8 *)(param_3 + 0x340) = uVar9;
                                                  thunk_FUN_03f5d7b8(param_3 + 0x340,uVar9);
                                                  if (*(char *)(param_3 + 0x48) != '\0') {
                                                    uVar9 = thunk_FUN_03f9944c(DAT_0918e4f8);
                                                    UnityEngine_Application_LogCallback___ctor
                                                              (uVar9,param_3,DAT_091c7db8,0);
                                                    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                                                                        
                                                  UnityEngine_Application__remove_logMessageReceivedThreaded
                                                            (uVar9,0);
                                                  uVar9 = thunk_FUN_03f9944c(DAT_0918e4f8);
                                                  UnityEngine_Application_LogCallback___ctor
                                                            (uVar9,param_3,DAT_091c7db8,0);
                                                  UnityEngine_Application__add_logMessageReceivedThreaded
                                                            (uVar9,0);
                                                  return;
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0733929c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

