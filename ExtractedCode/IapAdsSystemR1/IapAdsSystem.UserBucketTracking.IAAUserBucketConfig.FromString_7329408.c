// rea decompile_all
// name: IapAdsSystem.UserBucketTracking.IAAUserBucketConfig$$FromString
// address: 0x7329408
// body: available
// range: 0x7329408-0x732977f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7329778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732977c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_UserBucketTracking_IAAUserBucketConfig__FromString(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined4 local_54;
  
  if ((DAT_095205f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09195c80);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091affd0);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_092144e8);
    FUN_03f5c2a4(&DAT_091fa098);
    DAT_095205f4 = 1;
  }
  local_54 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar2,DAT_091b0558);
  lVar3 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(lVar3,DAT_091aff90);
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) == 0) {
    if ((param_1 == 0) || (lVar5 = System_String__Split(param_1,DAT_091fa098,1,0), lVar5 == 0))
    goto LAB_07329778;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_07329778;
        uVar7 = System_String__Trim(lVar6,0);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = System_Single__TryParse(uVar7,0x1ff,uVar8,&local_54,0);
        lVar6 = DAT_091b0570;
        if ((uVar4 & 1) == 0) {
          uVar7 = System_String__Concat(DAT_092144e8,uVar7,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar7,0);
        }
        else {
          if (lVar2 == 0) goto LAB_07329778;
          lVar10 = *(long *)(lVar2 + 0x10);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_07329778;
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar7;
            thunk_FUN_03f5d7b8(puVar9,uVar7);
          }
          else {
            FUN_057e0c68(lVar2,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = DAT_091affa0;
          if (lVar3 == 0) goto LAB_07329778;
          lVar10 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_07329778;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = local_54;
          }
          else {
            FUN_05863604(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09195c80);
  System_Object___ctor(lVar5,0);
  if ((lVar2 != 0) && (uVar7 = FUN_057e28a4(lVar2,DAT_091b05f8), lVar5 != 0)) {
    *(undefined8 *)(lVar5 + 0x10) = uVar7;
    thunk_FUN_03f5d7b8();
    if (lVar3 != 0) {
      uVar7 = FUN_0586519c(lVar3,DAT_091affd0);
      *(undefined8 *)(lVar5 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8();
      return lVar5;
    }
  }
LAB_07329778:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

