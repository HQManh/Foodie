// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaNode$$.ctor
// address: 0x76d2f64
// body: available
// range: 0x76d2f64-0x76d31db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d31c4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d31c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d31cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d31d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaNode___ctor(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_0952275e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fae0);
    FUN_03f5c2a4(&DAT_09176b68);
    FUN_03f5c2a4(&DAT_091cb220);
    FUN_03f5c2a4(&DAT_091cb340);
    FUN_03f5c2a4(&DAT_09180210);
    FUN_03f5c2a4(&DAT_091ae080);
    FUN_03f5c2a4(&DAT_0917c5e8);
    FUN_03f5c2a4(&DAT_091b9568);
    FUN_03f5c2a4(&DAT_0917e510);
    DAT_0952275e = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    plVar1 = (long *)FUN_03f5c394(DAT_09180210,1);
    if (plVar1 != (long *)0x0) {
      if ((param_3 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar1[3] != 0) {
        plVar1[4] = param_3;
        thunk_FUN_03f5d7b8(plVar1 + 4,param_3);
        uVar5 = FUN_04b08ea4(uVar5,plVar1,DAT_091cb340);
        uVar5 = FUN_04b08b78(uVar5,DAT_091cb220);
        uVar3 = thunk_FUN_03f9944c(DAT_0917e510);
        FUN_05f07778(uVar3,uVar5,DAT_091b9568);
        puVar4 = (undefined8 *)(param_1 + 0x18);
        *puVar4 = uVar3;
        thunk_FUN_03f5d7b8(puVar4,uVar3);
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        uVar5 = thunk_FUN_03f9944c(DAT_09176b68);
        FUN_06fd7798(uVar5,uVar3,DAT_0919fae0);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar5);
        uVar3 = *(undefined8 *)(param_2 + 0x28);
        uVar5 = thunk_FUN_03f9944c(DAT_09176b68);
        FUN_06fd7798(uVar5,uVar3,DAT_0919fae0);
        *(undefined8 *)(param_1 + 0x28) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar5);
        uVar3 = *(undefined8 *)(param_2 + 0x30);
        uVar5 = thunk_FUN_03f9944c(DAT_0917c5e8);
        FUN_057e053c(uVar5,uVar3,DAT_091ae080);
        *(undefined8 *)(param_1 + 0x30) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar5);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
        thunk_FUN_03f5d7b8();
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
        thunk_FUN_03f5d7b8();
        uVar5 = Newtonsoft_Json_Schema_JsonSchemaNode__GetId(*puVar4);
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

