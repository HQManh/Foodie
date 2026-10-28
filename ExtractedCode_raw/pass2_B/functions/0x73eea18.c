// rea decompile_all
// name: Mono.Security.ASN1$$.ctor
// address: 0x73eea18
// body: available
// range: 0x73eea18-0x73eeb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73eeb44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eeb48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eeb90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1___ctor(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  undefined4 local_34;
  
  if ((DAT_09520e03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520e03 = 1;
  }
  local_34 = 0;
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x18);
    if ((iVar9 == 0) ||
       (*(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x20), iVar9 == 1)) {
LAB_073eeb44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    bVar1 = *(byte *)(param_2 + 0x21);
    uVar5 = (uint)bVar1;
    uVar6 = (uint)bVar1;
    if (bVar1 < 0x81) {
      if (uVar6 == 0x80) {
        thunk_FUN_03fc39d4(&DAT_09188920);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_09211ba0);
        System_NotSupportedException___ctor(uVar3,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091bf4e8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar4);
      }
      iVar9 = 2;
    }
    else {
      uVar5 = 0;
      uVar7 = (ulong)(uVar6 - 0x80);
      pbVar8 = (byte *)(param_2 + 0x22);
      do {
        if (iVar9 - 2U <= bVar1 - 0x81) goto LAB_073eeb44;
        uVar7 = uVar7 - 1;
        uVar5 = (uint)*pbVar8 | uVar5 << 8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
      iVar9 = uVar6 - 0x7e;
    }
    lVar2 = FUN_03f5c394(DAT_0917fc88,uVar5);
    plVar10 = (long *)(param_1 + 0x18);
    *plVar10 = lVar2;
    thunk_FUN_03f5d7b8(plVar10,lVar2);
    System_Buffer__BlockCopy(param_2,iVar9,*plVar10,0,uVar5,0);
    if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
      lVar2 = *plVar10;
      local_34 = 0;
      if (lVar2 == 0) goto LAB_073eeb48;
      Mono_Security_ASN1__Decode(param_1,lVar2,&local_34,*(undefined4 *)(lVar2 + 0x18));
    }
    return;
  }
LAB_073eeb48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

