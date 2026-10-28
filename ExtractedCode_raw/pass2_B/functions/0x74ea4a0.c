// rea decompile_all
// name: System.Reflection.AssemblyName$$get_FullName
// address: 0x74ea4a0
// body: available
// range: 0x74ea4a0-0x74ea7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ea7f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ea7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_AssemblyName__get_FullName(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_095215d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8720);
    FUN_03f5c2a4(&DAT_091f8780);
    FUN_03f5c2a4(&DAT_09225b30);
    FUN_03f5c2a4(&DAT_091f8778);
    FUN_03f5c2a4(&DAT_0921fc08);
    FUN_03f5c2a4(&DAT_091f87a8);
    FUN_03f5c2a4(&DAT_091f6d50);
    FUN_03f5c2a4(&DAT_091f87e0);
    DAT_095215d6 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_074ea7f8;
  uVar1 = System_String__get_Chars(*(long *)(param_1 + 0x10),0,0);
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535460);
  }
  uVar5 = System_Char__IsWhiteSpace(uVar1,0);
  if ((uVar5 & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_074ea7f8;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar6 = System_String__Concat(DAT_091f6d50,*(undefined8 *)(param_1 + 0x10),DAT_091f6d50,0);
    if (plVar4 == (long *)0x0) goto LAB_074ea7f8;
  }
  System_Text_StringBuilder__Append(plVar4,uVar6,0);
  uVar5 = System_Version__op_Inequality(*(undefined8 *)(param_1 + 0x60),0,0);
  if ((uVar5 & 1) != 0) {
    System_Text_StringBuilder__Append(plVar4,DAT_091f87e0,0);
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_074ea7f8;
    uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    System_Text_StringBuilder__Append(plVar4,uVar6,0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Text_StringBuilder__Append(plVar4,DAT_091f8720,0);
    plVar7 = *(long **)(param_1 + 0x30);
    if (plVar7 == (long *)0x0) goto LAB_074ea7f8;
    iVar2 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    plVar7 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (plVar7 == (long *)0x0) goto LAB_074ea7f8;
    iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    uVar6 = DAT_0921fc08;
    if (iVar2 != iVar3) {
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 == (long *)0x0) goto LAB_074ea7f8;
      uVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    }
    System_Text_StringBuilder__Append(plVar4,uVar6,0);
  }
  lVar8 = System_Reflection_AssemblyName__InternalGetPublicKeyToken(param_1);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x18) == 0) {
      System_Text_StringBuilder__Append(plVar4,DAT_091f8780,0);
    }
    else {
      System_Text_StringBuilder__Append(plVar4,DAT_091f8778,0);
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar5 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar6 = System_Byte__ToString(lVar8 + 0x20 + uVar5,DAT_09225b30,0);
          System_Text_StringBuilder__Append(plVar4,uVar6,0);
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
  }
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    if (plVar4 != (long *)0x0) {
LAB_074ea7d4:
                    /* WARNING: Could not recover jumptable at 0x074ea7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return uVar6;
    }
  }
  else if (plVar4 != (long *)0x0) {
    System_Text_StringBuilder__Append(plVar4,DAT_091f87a8,0);
    goto LAB_074ea7d4;
  }
LAB_074ea7f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

