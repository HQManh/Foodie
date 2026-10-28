// rea decompile_all
// name: Lofelt.NiceVibrations.LofeltHaptics$$Initialize
// address: 0x7364098
// body: available
// range: 0x7364098-0x73646eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7364698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736469c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646a8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646b8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73646c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073646b4) */
/* WARNING: Removing unreachable block (ram,0x073646a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Lofelt_NiceVibrations_LofeltHaptics__Initialize(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_095208c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181130);
    FUN_03f5c2a4(&DAT_091bfa88);
    FUN_03f5c2a4(&DAT_091bfb60);
    FUN_03f5c2a4(&DAT_09181140);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187c48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091f8008);
    FUN_03f5c2a4(&DAT_091f8258);
    FUN_03f5c2a4(&DAT_09222188);
    FUN_03f5c2a4(&DAT_091f8248);
    FUN_03f5c2a4(&DAT_09222448);
    FUN_03f5c2a4(&DAT_0921c0b0);
    FUN_03f5c2a4(&DAT_091f80c8);
    FUN_03f5c2a4(&DAT_09219540);
    FUN_03f5c2a4(&DAT_09220d60);
    FUN_03f5c2a4(&DAT_092234d0);
    FUN_03f5c2a4(&DAT_09220d70);
    FUN_03f5c2a4(&DAT_09219470);
    FUN_03f5c2a4(&DAT_09219468);
    FUN_03f5c2a4(&DAT_0921ebf8);
    FUN_03f5c2a4(&DAT_09219f78);
    DAT_095208c8 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09181130);
  UnityEngine_AndroidJavaClass___ctor(plVar1,DAT_09219540,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)FUN_04ccb67c(plVar1,DAT_09219f78,DAT_091bfb60);
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((plVar2 != (long *)0x0) &&
     (lVar4 = thunk_FUN_03f99350(plVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3[4] = (long)plVar2;
  thunk_FUN_03f5d7b8(plVar3 + 4,plVar2);
  uVar5 = thunk_FUN_03f9944c(DAT_09181140);
  UnityEngine_AndroidJavaObject___ctor(uVar5,DAT_09219470,plVar3,0);
  if (*(int *)(DAT_09187c48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  **(undefined8 **)(DAT_09187c48 + 0xb8) = uVar5;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187c48 + 0xb8),uVar5);
  lVar4 = DAT_091c0270;
  lVar8 = *(long *)(DAT_091c0270 + 0x38);
  lVar11 = **(long **)(DAT_09187c48 + 0xb8);
  if (lVar8 == 0) {
    FUN_03f95ac8(DAT_091c0270);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = FUN_04cc92b0(lVar11,DAT_0921c0b0,**(undefined8 **)(lVar4 + 0xb8),DAT_091bfa88);
  uVar5 = DAT_09180318;
  *(undefined8 *)(*(long *)(DAT_09187c48 + 0xb8) + 0x10) = uVar6;
  plVar3 = (long *)FUN_03f5c394(uVar5,1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((plVar2 != (long *)0x0) &&
     (lVar4 = thunk_FUN_03f99350(plVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar3[4] = (long)plVar2;
  thunk_FUN_03f5d7b8(plVar3 + 4,plVar2);
  uVar5 = thunk_FUN_03f9944c(DAT_09181140);
  UnityEngine_AndroidJavaObject___ctor(uVar5,DAT_09219468,plVar3,0);
  puVar7 = (undefined8 *)(*(long *)(DAT_09187c48 + 0xb8) + 8);
  *puVar7 = uVar5;
  thunk_FUN_03f5d7b8(puVar7,uVar5);
  if (**(long **)(DAT_09187c48 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(**(long **)(DAT_09187c48 + 0xb8),0);
  lVar4 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_09220d60,DAT_091f8008,0,0);
  lVar8 = **(long **)(DAT_09187c48 + 0xb8);
  (*(long **)(DAT_09187c48 + 0xb8))[3] = lVar4;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(lVar8,0);
  lVar4 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_092234d0,DAT_091f8008,0,0);
  lVar8 = **(long **)(DAT_09187c48 + 0xb8);
  (*(long **)(DAT_09187c48 + 0xb8))[4] = lVar4;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(lVar8,0);
  lVar4 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_09222188,DAT_091f80c8,0,0);
  lVar8 = **(long **)(DAT_09187c48 + 0xb8);
  (*(long **)(DAT_09187c48 + 0xb8))[5] = lVar4;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(lVar8,0);
  lVar4 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_0921ebf8,DAT_091f8248,0,0);
  lVar8 = **(long **)(DAT_09187c48 + 0xb8);
  (*(long **)(DAT_09187c48 + 0xb8))[6] = lVar4;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(lVar8,0);
  uVar5 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_09222448,DAT_091f80c8,0,0);
  lVar4 = *(long *)(*(long *)(DAT_09187c48 + 0xb8) + 8);
  *(undefined8 *)(*(long *)(DAT_09187c48 + 0xb8) + 0x38) = uVar5;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = UnityEngine_AndroidJavaObject__GetRawClass(lVar4,0);
  uVar5 = UnityEngine_AndroidJNIHelper__GetMethodID(uVar5,DAT_09220d70,DAT_091f8258,0,0);
  *(undefined8 *)(*(long *)(DAT_09187c48 + 0xb8) + 0x40) = uVar5;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07364604;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07364604:
    (*(code *)*puVar7)(plVar2,puVar7[1]);
  }
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0736466c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_0736466c:
    (*(code *)*puVar7)(plVar1,puVar7[1]);
  }
  return;
}

