// rea decompile_all
// name: Newtonsoft.Json.Converters.ExpandoObjectConverter$$ReadObject
// address: 0x7707a2c
// body: available
// range: 0x7707a2c-0x7707bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7707bdc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7707bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadObject
                 (undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_0952296a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184378);
    FUN_03f5c2a4(&DAT_0917a210);
    DAT_0952296a = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09184378);
  System_Dynamic_ExpandoObject___ctor(plVar2,0);
  if (param_2 == (long *)0x0) {
LAB_07707bf8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  while ((uVar3 & 1) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 4) {
      plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar4 == (long *)0x0) goto LAB_07707bf8;
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      if ((uVar3 & 1) == 0) break;
      uVar7 = Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadValue(param_1,param_2);
      if (plVar2 == (long *)0x0) goto LAB_07707bf8;
      lVar8 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a210) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07707b7c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a210,1);
LAB_07707b7c:
      (*(code *)*puVar5)(plVar2,uVar6,uVar7,puVar5[1]);
    }
    else if (iVar1 == 0xd) {
      return plVar2;
    }
    uVar3 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  }
  uVar6 = thunk_FUN_03fc39d4(&DAT_09211d08);
  uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091cbb48);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

