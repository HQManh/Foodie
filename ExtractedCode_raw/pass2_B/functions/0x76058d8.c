// rea decompile_all
// name: System.MonoCustomAttrs$$IsDefined
// address: 0x76058d8
// body: available
// range: 0x76058d8-0x7605b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7605b10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605b14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605b5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_MonoCustomAttrs__IsDefined(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_09521ff0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185938);
    FUN_03f5c2a4(&DAT_09188378);
    DAT_09521ff0 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09217bc0);
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d3c48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  lVar9 = 0;
  do {
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_MonoCustomAttrs__IsUserCattrProvider(param_1);
    if ((uVar3 & 1) != 0) {
      if (param_1 == (long *)0x0) {
LAB_07605b10:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *param_1;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 == 0) goto LAB_07605ac8;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_07605ab0;
    }
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = FUN_03f6c540(param_1,param_2);
    if ((uVar2 & 1) != 0) {
LAB_07605a6c:
      uVar2 = 1;
      break;
    }
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = System_MonoCustomAttrs__GetPseudoCustomAttributes(param_1,param_2);
    if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
      lVar10 = 0;
      do {
        if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if ((*(long *)(lVar4 + 0x20 + lVar10 * 8) == 0) ||
           (uVar5 = FUN_03f6c2d0(), param_2 == (long *)0x0)) goto LAB_07605b10;
        uVar3 = (**(code **)(*param_2 + 0x2b8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x2c0));
        if ((uVar3 & 1) != 0) goto LAB_07605a6c;
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar1);
    }
    if (lVar9 == 0) {
      if ((param_3 & 1) == 0) break;
      if (*(int *)(DAT_09188378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = System_MonoCustomAttrs__RetrieveAttributeUsage(param_2);
      if (lVar9 == 0) goto LAB_07605b10;
      if (*(char *)(lVar9 + 0x15) == '\0') break;
    }
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_1 = (long *)System_MonoCustomAttrs__GetBase(param_1);
  } while (param_1 != (long *)0x0);
  return (ulong)(uVar2 & 1);
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_07605ab0:
    if (*(long *)(piVar8 + -2) == DAT_09185938) {
      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_07605ae8;
    }
  }
LAB_07605ac8:
  puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185938,2);
LAB_07605ae8:
                    /* WARNING: Could not recover jumptable at 0x07605b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar6)(param_1,param_2,param_3 & 1,puVar6[1]);
  return uVar3;
}

