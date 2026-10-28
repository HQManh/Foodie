// rea decompile_all
// name: Datpt.Cook_Order.HandTutController$$MoveInCircle
// address: 0x41aadd0
// body: available
// range: 0x41aadd0-0x41ab04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ab048 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ab04c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_HandTutController__MoveInCircle
               (undefined4 param_1,float param_2,float param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_2;
  if ((DAT_095168b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbf20);
    FUN_03f5c2a4(&DAT_091eb048);
    FUN_03f5c2a4(&DAT_091eb050);
    FUN_03f5c2a4(&DAT_09191210);
    DAT_095168b3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191210);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = param_1;
    *(long *)(lVar1 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_4);
    plVar6 = (long *)(lVar1 + 0x20);
    *plVar6 = param_5;
    thunk_FUN_03f5d7b8(plVar6,param_5);
    Datpt_Cook_Order_HandTutController__OnFadeIn(param_4);
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (*plVar6 != 0) {
      fVar7 = (float)UnityEngine_Transform__get_position(*plVar6,0);
      if (DAT_09515cf0 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf0 = '\x01';
      }
      if (lVar2 != 0) {
        fVar8 = *(float *)(lVar1 + 0x14);
        lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_position
                  (fVar7 + fVar8 * *(float *)(lVar5 + 0x3c),fVar9 + fVar8 * *(float *)(lVar5 + 0x40)
                   ,param_3 + *(float *)(lVar5 + 0x44) * fVar8,lVar2,0);
        *(undefined4 *)(lVar1 + 0x10) = 0;
        Datpt_Cook_Order_HandTutController__StopTut(param_4);
        uVar3 = thunk_FUN_03f9944c(DAT_09175e18);
        FUN_06dfb188(uVar3,lVar1,DAT_091eb048,0);
        uVar4 = thunk_FUN_03f9944c(DAT_09175e68);
        FUN_06dfc2b4(uVar4,lVar1,DAT_091eb050,0);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = DG_Tweening_DOTween__To(0x43b40000,param_2,uVar3,uVar4,0);
        uVar3 = FUN_04d95e8c(uVar3,1,DAT_091dbe80);
        uVar3 = FUN_04d962f4(uVar3,0xffffffff,0,DAT_091dbf20);
        *(undefined8 *)(param_4 + 0x50) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x50),uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

