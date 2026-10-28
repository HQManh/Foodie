// rea decompile_all
// name: IapAdsSystem.AdsCampaignProfile$$CreateBuiltIn
// address: 0x72f9570
// body: available
// range: 0x72f9570-0x72f97c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f97bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72f97c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_AdsCampaignProfile__CreateBuiltIn(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  if ((DAT_0952042a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fc0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09217280);
    FUN_03f5c2a4(&DAT_09217288);
    DAT_0952042a = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09180fc0);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    uVar5 = DAT_091801b8;
    *(undefined4 *)(lVar1 + 0x20) = 0xb4;
    *(undefined8 *)(lVar1 + 0x18) = 0xf0000000a;
    lVar2 = FUN_03f5c394(uVar5,1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        plVar6 = (long *)(lVar1 + 0x28);
        *plVar6 = lVar2;
        *(undefined4 *)(lVar2 + 0x20) = 0x1e;
        thunk_FUN_03f5d7b8(plVar6);
        lVar2 = FUN_03f5c394(DAT_091801b8,1);
        if (lVar2 == 0) goto LAB_072f97bc;
        if (*(int *)(lVar2 + 0x18) != 0) {
          plVar7 = (long *)(lVar1 + 0x30);
          *plVar7 = lVar2;
          *(undefined4 *)(lVar2 + 0x20) = 0x78;
          thunk_FUN_03f5d7b8(plVar7);
          *(undefined4 *)(lVar1 + 0x60) = 5;
          *(undefined8 *)(lVar1 + 0x40) = 1;
          *(undefined8 *)(lVar1 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(lVar1 + 0x50) = 0xffffffff00000000;
          *(undefined8 *)(lVar1 + 0x48) = 0xb;
          *(undefined8 *)(lVar1 + 0x58) = 0x100000001;
          uVar3 = IapAdsSystem_AdsCampaignProfile__GetRemoteKey(param_1);
          uVar4 = System_String__op_Equality(uVar3,DAT_09217280,0);
          uVar5 = DAT_091801b8;
          if ((uVar4 & 1) == 0) {
            uVar4 = System_String__op_Equality(uVar3,DAT_09217288,0);
            uVar5 = DAT_091801b8;
            if ((uVar4 & 1) != 0) {
              *(undefined4 *)(lVar1 + 0x20) = 0x15e;
              *(undefined8 *)(lVar1 + 0x18) = 0x3200000032;
              uVar5 = FUN_03f5c394(uVar5,0);
              *(undefined8 *)(lVar1 + 0x28) = uVar5;
              thunk_FUN_03f5d7b8(plVar6,uVar5);
              uVar5 = FUN_03f5c394(DAT_091801b8,0);
              *(undefined8 *)(lVar1 + 0x30) = uVar5;
              thunk_FUN_03f5d7b8(plVar7,uVar5);
              *(undefined4 *)(lVar1 + 0x44) = 1;
              *(undefined8 *)(lVar1 + 0x54) = 0x1ffffffff;
            }
          }
          else {
            *(undefined4 *)(lVar1 + 0x20) = 0x78;
            *(undefined8 *)(lVar1 + 0x18) = 0xa0000000a;
            uVar5 = FUN_03f5c394(uVar5,0);
            *(undefined8 *)(lVar1 + 0x28) = uVar5;
            thunk_FUN_03f5d7b8(plVar6,uVar5);
            uVar5 = FUN_03f5c394(DAT_091801b8,0);
            *(undefined8 *)(lVar1 + 0x30) = uVar5;
            thunk_FUN_03f5d7b8(plVar7,uVar5);
            *(undefined4 *)(lVar1 + 0x38) = 0x1e;
            *(undefined4 *)(lVar1 + 0x48) = 2;
            *(undefined4 *)(lVar1 + 0x54) = 1;
          }
          return lVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_072f97bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

