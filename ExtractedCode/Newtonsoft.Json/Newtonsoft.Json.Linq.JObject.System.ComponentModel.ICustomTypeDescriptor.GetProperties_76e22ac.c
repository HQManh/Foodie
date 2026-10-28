// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$System.ComponentModel.ICustomTypeDescriptor.GetProperties
// address: 0x76e22ac
// body: available
// range: 0x76e22ac-0x76e258f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e24b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2578 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e2584 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e258c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076e2588) */

undefined8
Newtonsoft_Json_Linq_JObject__System_ComponentModel_ICustomTypeDescriptor_GetProperties
          (undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  
  if ((DAT_095227f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a928);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187238);
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_09189778);
    FUN_03f5c2a4(&DAT_091803c0);
    DAT_095227f0 = 1;
  }
  uVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1);
  plVar2 = (long *)FUN_03f5c394(DAT_091803c0,uVar1);
  plVar3 = (long *)Newtonsoft_Json_Linq_JObject__GetEnumerator(param_1);
  if (plVar3 != (long *)0x0) {
    uVar10 = 0;
    do {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076e23e0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076e23e0:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_076e252c;
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_076e2504;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_076e24ec;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a928) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076e2444;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a928,0);
LAB_076e2444:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      lVar7 = thunk_FUN_03f9944c(DAT_09187238);
      System_ComponentModel_PropertyDescriptor___ctor(lVar7,uVar5,0,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if (*(uint *)(plVar2 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[(long)(int)uVar10 + 4] = lVar7;
      thunk_FUN_03f5d7b8(plVar2 + (long)(int)uVar10 + 4,lVar7);
      uVar10 = uVar10 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_076e24ec:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076e2520;
    }
  }
LAB_076e2504:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076e2520:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_076e252c:
  uVar5 = thunk_FUN_03f9944c(DAT_09189778);
  System_ComponentModel_PropertyDescriptorCollection___ctor(uVar5,plVar2,0);
  return uVar5;
}

