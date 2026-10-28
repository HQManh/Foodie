// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaNode$$.ctor
// address: 0x76d265c
// body: available
// range: 0x76d265c-0x76d283f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d2828 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d282c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d2830 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d283c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaNode___ctor(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_0952275d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fad8);
    FUN_03f5c2a4(&DAT_09176b68);
    FUN_03f5c2a4(&DAT_09180210);
    FUN_03f5c2a4(&DAT_091ae078);
    FUN_03f5c2a4(&DAT_0917c5e8);
    FUN_03f5c2a4(&DAT_091b9568);
    FUN_03f5c2a4(&DAT_0917e510);
    DAT_0952275d = 1;
  }
  System_Object___ctor(param_1,0);
  plVar1 = (long *)FUN_03f5c394(DAT_09180210,1);
  if (plVar1 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((int)plVar1[3] != 0) {
      plVar1[4] = param_2;
      thunk_FUN_03f5d7b8(plVar1 + 4,param_2);
      uVar3 = thunk_FUN_03f9944c(DAT_0917e510);
      FUN_05f07778(uVar3,plVar1,DAT_091b9568);
      puVar4 = (undefined8 *)(param_1 + 0x18);
      *puVar4 = uVar3;
      thunk_FUN_03f5d7b8(puVar4,uVar3);
      uVar3 = thunk_FUN_03f9944c(DAT_09176b68);
      FUN_06fd76bc(uVar3,DAT_0919fad8);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar3);
      uVar3 = thunk_FUN_03f9944c(DAT_09176b68);
      FUN_06fd76bc(uVar3,DAT_0919fad8);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar3);
      uVar3 = thunk_FUN_03f9944c(DAT_0917c5e8);
      FUN_057e0400(uVar3,DAT_091ae078);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar3);
      uVar3 = Newtonsoft_Json_Schema_JsonSchemaNode__GetId(*puVar4);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

