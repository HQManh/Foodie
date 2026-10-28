// rea decompile_all
// name: IapAdsSystem.UserBucketTracking.IAPUserBucketConfig$$FromString
// address: 0x7329780
// body: available
// range: 0x7329780-0x7329beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7329be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7329be8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_UserBucketTracking_IAPUserBucketConfig__FromString(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_68;
  
  if ((DAT_095205f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09195c88);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091affd0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_092144e0);
    FUN_03f5c2a4(&DAT_092144f0);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091fa098);
    DAT_095205f5 = 1;
  }
  local_68 = 0;
  uVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar2,DAT_091b0558);
  lVar3 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(lVar3,DAT_091aff90);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar4,DAT_091adc70);
  uVar5 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar5 & 1) == 0) {
    if ((param_1 == 0) || (lVar6 = System_String__Split(param_1,DAT_091fa098,1,0), lVar6 == 0))
    goto LAB_07329be4;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
LAB_07329be8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar9 == 0) || (lVar7 = System_String__Split(lVar9,DAT_091f9f58,1,0), lVar7 == 0))
        goto LAB_07329be4;
        uVar2 = DAT_092144f0;
        if (*(int *)(lVar7 + 0x18) == 2) {
          if (*(long *)(lVar7 + 0x20) == 0) goto LAB_07329be4;
          uVar2 = System_String__Trim(*(long *)(lVar7 + 0x20),0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar5 = System_Single__TryParse(uVar2,0x1ff,uVar8,(long)&local_68 + 4,0);
          uVar2 = DAT_092144e0;
          if ((uVar5 & 1) == 0) goto LAB_07329a94;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_07329be8;
          if (*(long *)(lVar7 + 0x28) == 0) goto LAB_07329be4;
          uVar2 = System_String__Trim(*(long *)(lVar7 + 0x28),0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar5 = System_Int32__TryParse(uVar2,0x1ff,uVar8,&local_68,0);
          lVar7 = DAT_091affa0;
          uVar2 = DAT_092144e0;
          if ((uVar5 & 1) == 0) goto LAB_07329a94;
          if (lVar3 == 0) goto LAB_07329be4;
          lVar9 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_07329be4;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_68._4_4_;
          }
          else {
            FUN_05863604(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = DAT_091adc88;
          if (lVar4 == 0) goto LAB_07329be4;
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_07329be4;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_68;
          }
          else {
            FUN_057971a8(lVar4,local_68 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
LAB_07329a94:
          uVar2 = System_String__Concat(uVar2,lVar9,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar2,0);
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09195c88);
  System_Object___ctor(lVar6,0);
  if ((lVar3 != 0) && (uVar2 = FUN_0586519c(lVar3,DAT_091affd0), lVar6 != 0)) {
    *(undefined8 *)(lVar6 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8();
    if (lVar4 != 0) {
      uVar2 = FUN_05798d44(lVar4,DAT_091add08);
      *(undefined8 *)(lVar6 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      return lVar6;
    }
  }
LAB_07329be4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

