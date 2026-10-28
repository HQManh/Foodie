// rea decompile_all
// name: Newtonsoft.Json.Schema.Extensions$$IsValid
// address: 0x76c8eac
// body: available
// range: 0x76c8eac-0x76c9053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c9050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Schema_Extensions__IsValid
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if ((DAT_09522727 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a148);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091e9ee0);
    FUN_03f5c2a4(&DAT_09190820);
    FUN_03f5c2a4(&DAT_0918caa8);
    DAT_09522727 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09190820);
  System_Object___ctor(lVar2,0);
  uVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar3,DAT_091b0558);
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    *puVar7 = uVar3;
    thunk_FUN_03f5d7b8(puVar7,uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0918caa8);
    Newtonsoft_Json_Schema_ValidationEventHandler___ctor(uVar3,lVar2,DAT_091e9ee0);
    Newtonsoft_Json_Schema_Extensions__Validate(param_1,param_2,uVar3);
    *param_3 = *puVar7;
    thunk_FUN_03f5d7b8(param_3);
    plVar6 = (long *)*param_3;
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a148) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076c9024;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a148,0);
LAB_076c9024:
      iVar1 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      return iVar1 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

