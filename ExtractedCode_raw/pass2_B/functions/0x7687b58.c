// rea decompile_all
// name: Newtonsoft.Json.Utilities.CollectionUtils$$CopyFromJaggedToMultidimensionalArray
// address: 0x7687b58
// body: available
// range: 0x7687b58-0x7687e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7687c00 to 0x75dc610 System.Array$$SetValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7687da4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687db4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687dc0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687e08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_CollectionUtils__CopyFromJaggedToMultidimensionalArray
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  
  if ((DAT_0952255b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_0952255b = 1;
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar14 = *(ulong *)(param_3 + 0x18);
    uVar2 = System_Array__get_Rank(param_2,0);
    uVar13 = (uint)uVar14;
    if (uVar2 == uVar13) {
      uVar5 = Newtonsoft_Json_Utilities_CollectionUtils__JaggedArrayGetValue(param_1,param_3);
      System_Array__SetValue(param_2,uVar5,param_3,0);
      return;
    }
    iVar3 = System_Array__GetLength(param_2,uVar14 & 0xffffffff,0);
    lVar6 = Newtonsoft_Json_Utilities_CollectionUtils__JaggedArrayGetValue(param_1,param_3);
    uVar5 = DAT_09185f80;
    if (lVar6 != 0) {
      lVar7 = thunk_FUN_03f99350(lVar6,DAT_09185f80);
      uVar10 = DAT_09185f80;
      lVar1 = DAT_091857d8;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar6,uVar5);
      }
      plVar8 = (long *)thunk_FUN_03f99350(lVar6,DAT_09185f80);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar6,uVar10);
      }
      lVar6 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar1) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_07687cb8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(plVar8,lVar1,1);
LAB_07687cb8:
      iVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar4 != iVar3) {
        thunk_FUN_03fc39d4(&DAT_091842a0);
        uVar5 = thunk_FUN_03f9944c();
        uVar10 = thunk_FUN_03fc39d4(&DAT_091fdce0);
        System_Exception___ctor(uVar5,uVar10,0);
        uVar10 = thunk_FUN_03fc39d4(&DAT_091c4f30);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar10);
      }
      lVar6 = FUN_03f5c394(DAT_091801b8,uVar13 + 1);
      if (0 < (int)uVar13) {
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar11 = 0;
        do {
          if (uVar2 == uVar11) goto LAB_07687da4;
          if (lVar6 == 0) goto LAB_07687da8;
          if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_07687da4;
          *(undefined4 *)(lVar6 + 0x20 + uVar11 * 4) = *(undefined4 *)(param_3 + 0x20 + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while ((uVar14 & 0xffffffff) != uVar11);
      }
      iVar3 = System_Array__GetLength(param_2,uVar14 & 0xffffffff,0);
      if (0 < iVar3) {
        if (lVar6 == 0) goto LAB_07687da8;
        iVar3 = 0;
        do {
          if (*(uint *)(lVar6 + 0x18) <= uVar13) {
LAB_07687da4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(int *)(lVar6 + (long)(int)uVar13 * 4 + 0x20) = iVar3;
          Newtonsoft_Json_Utilities_CollectionUtils__CopyFromJaggedToMultidimensionalArray
                    (param_1,param_2,lVar6);
          iVar3 = iVar3 + 1;
          iVar4 = System_Array__GetLength(param_2,uVar14 & 0xffffffff,0);
        } while (iVar3 < iVar4);
      }
      return;
    }
  }
LAB_07687da8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

