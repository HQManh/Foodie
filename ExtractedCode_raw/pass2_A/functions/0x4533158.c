// rea decompile_all
// name: Utilities.DateTime.DateStruct$$FromString
// address: 0x4533158
// body: available
// range: 0x4533158-0x45332bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453323c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4533240 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45332b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Utilities_DateTime_DateStruct__FromString(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09518656 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09518656 = 1;
  }
  if ((param_1 == 0) || (lVar3 = System_String__Split(param_1,DAT_091f8a38,0,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar3 + 0x18) == 3) {
    iVar1 = System_Int32__Parse(*(undefined8 *)(lVar3 + 0x20),0);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      iVar2 = System_Int32__Parse(*(undefined8 *)(lVar3 + 0x28),0);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        auVar7._0_4_ = System_Int32__Parse(*(undefined8 *)(lVar3 + 0x30),0);
        if (iVar1 < 1) {
          puVar4 = &DAT_09205bd8;
        }
        else if (iVar2 - 1U < 0xc) {
          if (auVar7._0_4_ - 1U < 0x1f) {
            auVar7._4_4_ = iVar2;
            auVar7._8_4_ = iVar1;
            auVar7._12_4_ = 0;
            return auVar7;
          }
          puVar4 = &DAT_09205710;
        }
        else {
          puVar4 = &DAT_092058b8;
        }
        goto LAB_04533270;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  puVar4 = &DAT_09205700;
LAB_04533270:
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  uVar5 = System_String__Concat(uVar5,param_1,0);
  thunk_FUN_03fc39d4(&DAT_091842a0);
  uVar6 = thunk_FUN_03f9944c();
  System_Exception___ctor(uVar6,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c78a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

