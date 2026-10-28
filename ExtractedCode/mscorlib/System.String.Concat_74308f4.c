// rea decompile_all
// name: System.String$$Concat
// address: 0x74308f4
// body: available
// range: 0x74308f4-0x7430aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7430a3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7430a84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7430aec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__Concat(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  do {
    if ((DAT_0952101a & 1) == 0) {
      FUN_03f5c2a4(&DAT_091805f8);
      DAT_0952101a = 1;
    }
    if (param_1 == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_092253e0);
      System_ArgumentNullException___ctor(uVar2,uVar3,0);
LAB_07430ad8:
      uVar3 = thunk_FUN_03fc39d4(&DAT_091da260);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    uVar5 = *(ulong *)(param_1 + 0x18);
    if ((int)uVar5 < 2) {
      if (uVar5 != 0) {
        if ((int)uVar5 == 0) {
LAB_07430a84:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          return *(long *)(param_1 + 0x20);
        }
      }
LAB_07430a50:
      return **(long **)(DAT_09535468 + 0xb8);
    }
    lVar4 = 0;
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_1 + lVar4 + 0x20);
      if (lVar6 != 0) {
        uVar8 = uVar8 + (long)*(int *)(lVar6 + 0x10);
      }
      lVar4 = lVar4 + 8;
    } while ((uVar5 & 0xffffffff) * 8 - lVar4 != 0);
    if (0x7fffffff < (long)uVar8) {
      thunk_FUN_03fc39d4(&DAT_09188d60);
      uVar2 = thunk_FUN_03f9944c();
      System_OutOfMemoryException___ctor(uVar2,0);
      goto LAB_07430ad8;
    }
    iVar7 = (int)uVar8;
    if (iVar7 == 0) goto LAB_07430a50;
    lVar4 = thunk_FUN_03f968a0(uVar8 & 0xffffffff);
    if ((int)*(ulong *)(param_1 + 0x18) < 1) {
      iVar9 = 0;
    }
    else {
      uVar5 = 0;
      iVar9 = 0;
      uVar8 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar5) goto LAB_07430a84;
        lVar6 = *(long *)(param_1 + 0x20 + uVar5 * 8);
        if ((lVar6 != 0) && (iVar1 = *(int *)(lVar6 + 0x10), iVar1 != 0)) {
          if (iVar7 - iVar9 < iVar1) {
            iVar9 = -1;
            break;
          }
          System_String__FillStringChecked(lVar4,iVar9);
          uVar8 = (ulong)*(uint *)(param_1 + 0x18);
          iVar9 = iVar1 + iVar9;
        }
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar8);
    }
    if (iVar9 == iVar7) {
      return lVar4;
    }
    lVar4 = System_Array__Clone(param_1,0);
    uVar3 = DAT_091805f8;
    param_1 = 0;
    if ((lVar4 != 0) && (param_1 = thunk_FUN_03f99350(lVar4,DAT_091805f8), param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar4,uVar3);
    }
  } while( true );
}

