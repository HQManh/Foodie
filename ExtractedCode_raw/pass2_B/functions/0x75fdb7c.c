// rea decompile_all
// name: System.Environment$$ReadXdgUserDir
// address: 0x75fdb7c
// body: available
// range: 0x75fdb7c-0x75fdecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fdd14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fdd48 to 0x758afe8 System.IO.Path$$Combine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fdebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fdec4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fdec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fdecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075fdec0) */

long System_Environment__ReadXdgUserDir
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_09521f99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0918b320);
    FUN_03f5c2a4(&DAT_091f7128);
    FUN_03f5c2a4(&DAT_09225210);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_09521f99 = 1;
  }
  lVar2 = System_Environment__internalGetEnvironmentVariable(param_3);
  if ((lVar2 != 0) &&
     (uVar3 = System_String__op_Inequality(lVar2,**(undefined8 **)(DAT_09535468 + 0xb8),0),
     (uVar3 & 1) != 0)) {
    return lVar2;
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_IO_Path__Combine(param_1,DAT_09225210,0);
  uVar3 = System_IO_File__Exists(uVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_IO_Path__Combine(param_2,param_4,0);
    return lVar2;
  }
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b320);
  System_IO_StreamReader___ctor(plVar5,uVar4,0);
  do {
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
      if (lVar2 == 0) {
        lVar2 = 0;
        iVar1 = 0xb;
        goto LAB_075fde00;
      }
      lVar2 = System_String__Trim(lVar2,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = System_String__IndexOf(lVar2,0x3d,0);
    } while (iVar1 < 9);
    uVar4 = System_String__Substring(lVar2,0,iVar1,0);
    uVar3 = System_String__op_Equality(uVar4,param_3,0);
  } while ((uVar3 & 1) == 0);
  lVar2 = System_String__Substring(lVar2,iVar1 + 1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = System_String__Trim(lVar2,0x22,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = System_String__StartsWithOrdinalUnchecked(lVar2,DAT_091f7128,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__StartsWithOrdinalUnchecked(lVar2,DAT_091f9400,0);
    if ((uVar3 & 1) != 0) goto LAB_075fddf8;
  }
  else {
    lVar2 = System_String__Substring(lVar2,6,0);
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_IO_Path__Combine(param_2,lVar2,0);
LAB_075fddf8:
  iVar1 = 10;
LAB_075fde00:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_075fde60;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_075fde60:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if ((iVar1 == 0) || (iVar1 == 0xb)) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_IO_Path__Combine(param_2,param_4,0);
  }
  return lVar2;
}

