// rea decompile_all
// name: System.Text.Encoding.EncodingByteBuffer$$.ctor
// address: 0x7450e70
// body: available
// range: 0x7450e70-0x74510ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745103c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74510a4 to 0x743914c System.Text.EncoderFallbackBuffer$$InternalInitialize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74510a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding_EncodingByteBuffer___ctor
               (long param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
               int param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  System_Object___ctor(param_1,0);
  plVar7 = (long *)(param_1 + 0x48);
  *plVar7 = param_2;
  thunk_FUN_03f5d7b8(plVar7,param_2);
  plVar6 = (long *)(param_1 + 0x50);
  *plVar6 = param_3;
  thunk_FUN_03f5d7b8(plVar6,param_3);
  *(long *)(param_1 + 0x10) = param_4;
  *(long *)(param_1 + 0x18) = param_4;
  *(long *)(param_1 + 0x30) = param_6;
  *(long *)(param_1 + 0x38) = param_6 + (long)param_7 * 2;
  *(long *)(param_1 + 0x20) = param_4 + param_5;
  *(long *)(param_1 + 0x28) = param_6;
  if (*plVar6 == 0) {
    if ((*plVar7 == 0) || (plVar6 = *(long **)(*plVar7 + 0x28), plVar6 == (long *)0x0))
    goto LAB_074510a8;
    uVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    thunk_FUN_03f5d7b8();
  }
  else {
    lVar2 = System_Text_Encoder__get_FallbackBuffer(*plVar6,0);
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar2;
    thunk_FUN_03f5d7b8(plVar7,lVar2);
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 == 0) goto LAB_074510a8;
    if ((*(char *)(lVar2 + 0x31) != '\0') &&
       (uVar3 = System_Text_Encoder__get_InternalHasFallbackBuffer(lVar2,0), (uVar3 & 1) != 0)) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_074510a8;
      iVar1 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (0 < iVar1) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar4 = FUN_03f5c394(uVar4,2);
        lVar2 = *plVar6;
        FUN_039b1d98(lVar2);
        plVar7 = *(long **)(lVar2 + 0x28);
        FUN_039b1d98(plVar7);
        uVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        FUN_039b1d98(uVar4);
        FUN_039b0da0(uVar4,uVar5);
        FUN_039af17c(uVar4,0,uVar5);
        lVar2 = *plVar6;
        FUN_039b1d98(lVar2);
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        FUN_039b1d98(uVar5);
        uVar5 = System_Object__GetType(uVar5,0);
        FUN_039b0da0(uVar4,uVar5);
        FUN_039af17c(uVar4,1,uVar5);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar4 = System_Environment__GetResourceString(uVar5,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar5,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091e9710);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Text_EncoderFallbackBuffer__InternalInitialize
              (*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),
               *(long *)(param_1 + 0x10) != 0,0);
    return;
  }
LAB_074510a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

