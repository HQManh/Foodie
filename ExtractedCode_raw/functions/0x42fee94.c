// rea decompile_all
// name: CakeOrder.Boot.BootGameCookOrder.<IEBootSequence>d__9$$MoveNext
// address: 0x42fee94
// body: available
// range: 0x42fee94-0x42ffc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ffc28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 CakeOrder_Boot_BootGameCookOrder_<IEBootSequence>d__9__MoveNext(long param_1)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  if ((DAT_0951753c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174928);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_09191558);
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184b60);
    FUN_03f5c2a4(&DAT_091cd750);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091b4988);
    FUN_03f5c2a4(&DAT_091b4b88);
    FUN_03f5c2a4(&DAT_091b4990);
    FUN_03f5c2a4(&DAT_091d4aa0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0918a650);
    FUN_03f5c2a4(&DAT_091e64c8);
    FUN_03f5c2a4(&DAT_091e64d0);
    FUN_03f5c2a4(&DAT_0918e928);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0921ea38);
    FUN_03f5c2a4(&DAT_0920ba10);
    FUN_03f5c2a4(&DAT_0921ea20);
    FUN_03f5c2a4(&DAT_0921ea30);
    FUN_03f5c2a4(&DAT_0920ba08);
    FUN_03f5c2a4(&DAT_0920b9b8);
    FUN_03f5c2a4(&DAT_0921a3f8);
    FUN_03f5c2a4(&DAT_09214238);
    DAT_0951753c = 1;
  }
  cVar3 = DAT_095175b0;
  cVar2 = DAT_095175ae;
  if (0xf < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = thunk_FUN_03f9944c(DAT_0918e928);
    System_Object___ctor(uVar6,0);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar6);
    UnityEngine_Screen__set_sleepTimeout(0xffffffff,0);
    Utilities_DeviceTier__DetectAndCache(0);
    if (*(int *)(DAT_09184b60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_GameFrameRate__ApplySaved(0);
    if (lVar13 != 0) {
      uVar6 = *(undefined8 *)(lVar13 + 0x20);
      if (*(int *)(DAT_0918a650 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(uVar6,1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    goto LAB_042ffc28;
  case 1:
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar10 = 2;
    goto LAB_042ffc08;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar11 = FUN_05a8f088(DAT_091b4b88);
    if ((uVar11 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 3;
      goto LAB_042ffc08;
    }
    lVar15 = *(long *)(param_1 + 0x28);
    if (lVar15 == 0) goto LAB_042ffc28;
    *(undefined8 *)(lVar15 + 0x10) = 0;
    *(undefined1 *)(lVar15 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar15 + 0x10),0);
    lVar15 = *(long *)(DAT_091b4b80 + 0x20);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_03f95a6c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_03f95a6c();
    }
    if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_042ffc28;
    lVar15 = *(long *)(**(long **)(lVar15 + 0xb8) + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = thunk_FUN_03f9944c(DAT_09174928);
    FUN_070a8c30(uVar6,uVar9,DAT_091e64c8,0);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar9,uVar16,DAT_091e64d0,0);
    if (lVar15 == 0) goto LAB_042ffc28;
    SceneTransitionR1_SceneLoader__ShowTransitionWithoutLoadScene(lVar15,uVar6,uVar9,0);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042ff49c;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042ff4cc;
  case 7:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042ff470;
  case 8:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_091891e0);
      DAT_095175b0 = '\x01';
    }
    if (**(long **)(DAT_091891e0 + 0xb8) != 0) {
      PlatformServiceR1_PlatformServiceManagers__StartInitialization
                (**(long **)(DAT_091891e0 + 0xb8),0,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 9;
      goto LAB_042ffc08;
    }
    goto LAB_042ffc28;
  case 9:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar2 == '\0') {
      FUN_03f5c2a4(&DAT_09184b78);
      DAT_095175ae = '\x01';
    }
    lVar13 = **(long **)(DAT_09184b78 + 0xb8);
    if (lVar13 == 0) goto LAB_042ffc28;
    uVar6 = CakeOrder_Boot_GameSystemInitializer__IEInitializationSequence(lVar13,0);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar13,uVar6,0);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar17 = CakeOrder_Localization_CakeLocalization__InitializeAsync(0);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar17;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(param_1 + 0x38),0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 == (long *)0x0))
    goto LAB_042ffc28;
    (**(code **)(*plVar14 + 0x198))(0x3dcccccd,plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
    goto LAB_042ff638;
  case 10:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_042ff638:
    if (DAT_095175b0 == '\0') {
      FUN_03f5c2a4(&DAT_091891e0);
      DAT_095175b0 = '\x01';
    }
    if (**(long **)(DAT_091891e0 + 0xb8) == 0) goto LAB_042ffc28;
    if (*(char *)(**(long **)(DAT_091891e0 + 0xb8) + 0x38) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 10;
      goto LAB_042ffc08;
    }
    IapAdsSystem_CrashlyticStateControl__SetBootStep(DAT_0921ea38,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x198))(0x3e99999a,plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
LAB_042ff6b0:
      if (DAT_095175ad == '\0') {
        FUN_03f5c2a4(&DAT_09186a28);
        DAT_095175ad = '\x01';
      }
      lVar13 = **(long **)(DAT_09186a28 + 0xb8);
      if (lVar13 == 0) goto LAB_042ffc28;
      if (*(char *)(lVar13 + 0xc4) == '\0') {
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 != (long *)0x0)) {
          (**(code **)(*plVar14 + 0x198))
                    (*(float *)(lVar13 + 0xc0) * 0.4 + 0.3,plVar14,*(undefined8 *)(*plVar14 + 0x1a0)
                    );
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar10 = 0xb;
          goto LAB_042ffc08;
        }
        goto LAB_042ffc28;
      }
      IapAdsSystem_CrashlyticStateControl__SetBootStep(DAT_0921ea20,0);
LAB_042ff704:
      if (DAT_095175ae == '\0') {
        FUN_03f5c2a4(&DAT_09184b78);
        DAT_095175ae = '\x01';
      }
      if (**(long **)(DAT_09184b78 + 0xb8) == 0) goto LAB_042ffc28;
      if (*(char *)(**(long **)(DAT_09184b78 + 0xb8) + 0x40) == '\0') {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar10 = 0xc;
      }
      else {
        IapAdsSystem_CrashlyticStateControl__SetBootStep(DAT_0921ea30,0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 == (long *)0x0))
        goto LAB_042ffc28;
        (**(code **)(*plVar14 + 0x198))(0x3f4ccccd,plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar10 = 0xd;
      }
      goto LAB_042ffc08;
    }
    goto LAB_042ffc28;
  case 0xb:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042ff6b0;
  case 0xc:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_042ff704;
  case 0xd:
  case 0xe:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_091891e0);
      DAT_095175b0 = '\x01';
    }
    if ((**(long **)(DAT_091891e0 + 0xb8) == 0) ||
       (lVar13 = *(long *)(**(long **)(DAT_091891e0 + 0xb8) + 0x30), lVar13 == 0))
    goto LAB_042ffc28;
    if (*(char *)(lVar13 + 0x28) != '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 0xe;
      goto LAB_042ffc08;
    }
    goto LAB_042ff3dc;
  case 0xf:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_042ff3dc:
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    plVar14 = *(long **)(param_1 + 0x38);
    if (plVar14 != (long *)0x0) {
      lVar13 = *plVar14;
      uVar1 = *(undefined2 *)(param_1 + 0x40);
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_042ff8b4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar14,DAT_091868c0,0);
LAB_042ff8b4:
      iVar5 = (*(code *)*puVar7)(plVar14,uVar1,puVar7[1]);
      if (iVar5 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar10 = 0xf;
        goto LAB_042ffc08;
      }
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x198))(0x3f666666,plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
      CakeOrder_Boot_BootGameCookOrder__LastSetupBeforePlay();
      return 0;
    }
    goto LAB_042ffc28;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_042ffc28;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar11 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar10 = 4;
    goto LAB_042ffc08;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x10), plVar14 == (long *)0x0))
  goto LAB_042ffc28;
  (**(code **)(*plVar14 + 0x198))(0,plVar14,*(undefined8 *)(*plVar14 + 0x1a0));
LAB_042ff49c:
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_042ffc28;
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar10 = 5;
    goto LAB_042ffc08;
  }
LAB_042ff4cc:
  if (DAT_095175ad == '\0') {
    FUN_03f5c2a4(&DAT_09186a28);
    DAT_095175ad = '\x01';
  }
  uVar6 = **(undefined8 **)(DAT_09186a28 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = UnityEngine_Object__op_Implicit(uVar6,0);
  if (((uVar11 & 1) != 0) && (uVar11 = FUN_05a8eda4(DAT_091b4990), (uVar11 & 1) != 0)) {
    if (DAT_095175ae == '\0') {
      FUN_03f5c2a4(&DAT_09184b78);
      DAT_095175ae = '\x01';
    }
    uVar6 = **(undefined8 **)(DAT_09184b78 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = FUN_0430cb84(0);
      if (iVar5 == 1) {
        lVar15 = FUN_039af8ec(DAT_091b4988);
        lVar8 = thunk_FUN_03f9944c(DAT_09191558);
        IapAdsSystem_IapAdsGlobalConfig_ConfigProfile___ctor(lVar8,0);
        if (lVar8 == 0) goto LAB_042ffc28;
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(undefined2 *)(lVar8 + 0x14) = 1;
        *(undefined4 *)(lVar8 + 0x10) = 0x101;
joined_r0x042ff960:
        if (lVar15 == 0) goto LAB_042ffc28;
        *(long *)(lVar15 + 0x20) = lVar8;
        thunk_FUN_03f5d7b8((long *)(lVar15 + 0x20),lVar8);
      }
      else if (iVar5 == 0) {
        lVar15 = FUN_039af8ec(DAT_091b4988);
        lVar8 = thunk_FUN_03f9944c(DAT_09191558);
        IapAdsSystem_IapAdsGlobalConfig_ConfigProfile___ctor(lVar8,0);
        if (lVar8 == 0) goto LAB_042ffc28;
        *(undefined2 *)(lVar8 + 0x14) = 0x100;
        *(undefined4 *)(lVar8 + 0x10) = 0x10001;
        if (lVar13 == 0) goto LAB_042ffc28;
        *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar13 + 0x2c);
        goto joined_r0x042ff960;
      }
      uVar6 = UnityEngine_PlayerPrefs__GetString
                        (DAT_0920ba08,**(undefined8 **)(DAT_09535468 + 0xb8),0);
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091814b0);
      }
      uVar9 = UnityEngine_Application__get_version(0);
      bVar4 = System_String__op_Inequality(uVar6,uVar9,0);
      *(byte *)(param_1 + 0x30) = bVar4 & 1;
      if ((bVar4 & 1) != 0) {
        lVar15 = FUN_039af8ec(DAT_091b4988);
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_042ffc28;
        *(undefined4 *)(*(long *)(lVar15 + 0x20) + 0x18) = 0;
      }
      if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = FUN_0430cb84(0);
      if (iVar5 == 1) {
        if (lVar13 == 0) goto LAB_042ffc28;
        if (*(char *)(lVar13 + 0x29) == '\0') goto LAB_042ffb08;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar15 = FUN_04c34b80(1,DAT_091d4aa0);
        plVar14 = (long *)(param_1 + 0x48);
        *plVar14 = lVar15;
        thunk_FUN_03f5d7b8(plVar14,lVar15);
        uVar11 = UnityEngine_Object__op_Equality(*plVar14,0,0);
        if ((uVar11 & 1) != 0) {
          lVar15 = thunk_FUN_03f9944c(DAT_09184b68);
          UnityEngine_GameObject___ctor(lVar15,DAT_0920ba10,0);
          if (lVar15 == 0) goto LAB_042ffc28;
          lVar15 = FUN_04b7c294(lVar15,DAT_091cd750);
          *plVar14 = lVar15;
          thunk_FUN_03f5d7b8(plVar14,lVar15);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_0920b9b8,0);
        }
        if (*plVar14 == 0) goto LAB_042ffc28;
        CakeOrder_RemoteConfigOverrideAuthorSelector__BeginSelection(*plVar14,0);
LAB_042ff470:
        plVar14 = (long *)(param_1 + 0x48);
        if (*plVar14 == 0) goto LAB_042ffc28;
        if (*(char *)(*plVar14 + 0x34) == '\0') {
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar10 = 7;
          goto LAB_042ffc08;
        }
        *plVar14 = 0;
        thunk_FUN_03f5d7b8(plVar14,0);
      }
      else {
LAB_042ffb08:
        if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CakeOrder_RemoteConfigDefaultSetterCakeOrder__ResetOverrideAuthorSelection(0);
        CakeOrder_RemoteConfigDefaultSetterCakeOrder__SelectOverrideAuthor(DAT_0921a3f8,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__Log(DAT_09214238,0);
      }
      if (DAT_095175ad == '\0') {
        FUN_03f5c2a4(&DAT_09186a28);
        DAT_095175ad = '\x01';
      }
      lVar15 = **(long **)(DAT_09186a28 + 0xb8);
      uVar6 = thunk_FUN_03f9944c(DAT_09182e88);
      CakeOrder_CookingdomInappPackListDefinition___ctor(uVar6,0);
      if ((lVar13 == 0) || (lVar15 == 0)) {
LAB_042ffc28:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      IapAdsSystem_IapAdsSystemInitializer__StartInitialization
                (lVar15,uVar6,*(undefined8 *)(lVar13 + 0x30),0,0);
      if (*(char *)(param_1 + 0x30) != '\0') {
        uVar6 = CakeOrder_Boot_BootGameCookOrder__IERecordRemoteConfigAppVersion();
        UnityEngine_MonoBehaviour__StartCoroutine(lVar13,uVar6,0);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 8;
      goto LAB_042ffc08;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
  uVar10 = 6;
LAB_042ffc08:
  *(undefined4 *)(param_1 + 0x10) = uVar10;
  return 1;
}

