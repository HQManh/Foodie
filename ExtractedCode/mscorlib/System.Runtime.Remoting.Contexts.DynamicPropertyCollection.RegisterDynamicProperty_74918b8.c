// rea decompile_all
// name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection$$RegisterDynamicProperty
// address: 0x74918b8
// body: available
// range: 0x74918b8-0x7491b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7491b00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7491b04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7491b4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7491b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7491b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07491afc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Runtime_Remoting_Contexts_DynamicPropertyCollection__RegisterDynamicProperty
          (long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  char local_3c [4];
  long local_38;
  
  if ((DAT_09521324 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09190420);
    FUN_03f5c2a4(&DAT_091858a0);
    FUN_03f5c2a4(&DAT_09185ad8);
    DAT_09521324 = 1;
  }
  local_3c[0] = '\0';
  local_38 = param_1;
  System_Threading_Monitor__Enter(param_1,local_3c,0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_09185ad8) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07491998;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185ad8,0);
LAB_07491998:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  iVar1 = System_Runtime_Remoting_Contexts_DynamicPropertyCollection__FindProperty(param_1,uVar3);
  if (iVar1 != -1) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar3 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fbb88);
    System_InvalidOperationException___ctor(uVar3,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c8ac8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  plVar11 = (long *)(param_1 + 0x10);
  lVar7 = *plVar11;
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar4,lVar7,0);
  lVar7 = thunk_FUN_03f9944c(DAT_09190420);
  System_Object___ctor(lVar7,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar7 + 0x10) = (long)param_2;
  thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),param_2);
  plVar5 = (long *)thunk_FUN_03f99350(param_2,DAT_091858a0);
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091858a0) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07491a74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091858a0,0);
LAB_07491a74:
    uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
    *(undefined8 *)(lVar7 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x308))(plVar4,lVar7,*(undefined8 *)(*plVar4 + 0x310));
    *plVar11 = (long)plVar4;
    thunk_FUN_03f5d7b8(plVar11,plVar4);
    if (local_3c[0] != '\0') {
      System_Threading_Monitor__Exit(local_38,0);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

