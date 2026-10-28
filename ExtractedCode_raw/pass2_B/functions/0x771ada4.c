// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$GetString
// address: 0x771ada4
// body: available
// range: 0x771ada4-0x771afff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771afb0 to 0x743662c System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771afb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771affc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Bson_BsonReader__GetString(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  if ((DAT_095229ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095229ee = 1;
  }
  if (param_2 == 0) {
    return **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  Newtonsoft_Json_Bson_BsonReader__EnsureBuffers(param_1);
  iVar9 = 0;
  iVar10 = 0;
  plVar8 = (long *)0x0;
  do {
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 == (long *)0x0) {
LAB_0771afb4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = param_2 - iVar10;
    if (0x80 - iVar9 <= param_2 - iVar10) {
      iVar2 = 0x80 - iVar9;
    }
    iVar2 = (**(code **)(*plVar5 + 0x2b8))
                      (plVar5,*(undefined8 *)(param_1 + 0x88),iVar9,iVar2,
                       *(undefined8 *)(*plVar5 + 0x2c0));
    if (iVar2 == 0) {
      thunk_FUN_03fc39d4(&DAT_09183fe0);
      uVar6 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211af0);
      System_IO_EndOfStreamException___ctor(uVar6,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c4180);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    iVar1 = iVar2 + iVar9;
    if (iVar1 == param_2) {
      plVar8 = (long *)System_Text_Encoding__get_UTF8(0);
      if (plVar8 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0x2d8))
                          (plVar8,*(undefined8 *)(param_1 + 0x88),0,param_2,
                           *(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(*plVar8 + 0x2e0));
        uVar6 = System_String__CreateString(0,*(undefined8 *)(param_1 + 0x90),0,uVar4,0);
        return uVar6;
      }
      goto LAB_0771afb4;
    }
    uVar3 = Newtonsoft_Json_Bson_BsonReader__GetLastFullCharStop(param_1,iVar1 + -1);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar8,param_2,0);
    }
    plVar5 = (long *)System_Text_Encoding__get_UTF8(0);
    if (plVar5 == (long *)0x0) goto LAB_0771afb4;
    uVar4 = (**(code **)(*plVar5 + 0x2d8))
                      (plVar5,*(undefined8 *)(param_1 + 0x88),0,uVar3 + 1,
                       *(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(*plVar5 + 0x2e0));
    if (plVar8 == (long *)0x0) goto LAB_0771afb4;
    System_Text_StringBuilder__Append(plVar8,*(undefined8 *)(param_1 + 0x90),0,uVar4,0);
    iVar9 = 0;
    if ((int)uVar3 < iVar1 + -1) {
      iVar9 = iVar1 + ~uVar3;
      System_Array__Copy(*(undefined8 *)(param_1 + 0x88),uVar3 + 1,*(undefined8 *)(param_1 + 0x88),0
                         ,iVar9,0);
    }
    iVar10 = iVar2 + iVar10;
    if (param_2 <= iVar10) {
                    /* WARNING: Could not recover jumptable at 0x0771af24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return uVar6;
    }
  } while( true );
}

