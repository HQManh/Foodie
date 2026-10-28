// rea decompile_all
// name: Newtonsoft.Json.DefaultJsonNameTable$$Add
// address: 0x763cfcc
// body: available
// range: 0x763cfcc-0x763d173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763d10c to 0x763d174 Newtonsoft.Json.DefaultJsonNameTable$$AddEntry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763d124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763d16c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763d170 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_DefaultJsonNameTable__Add(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_09522275 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091838d0);
    DAT_09522275 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921df98);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c8350);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  iVar8 = *(int *)(param_2 + 0x10);
  if (iVar8 == 0) {
    return **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  iVar7 = iVar8;
  if (*(int *)(DAT_091838d0 + 0xe4) == 0) {
    FUN_03f5c424();
    iVar7 = *(int *)(param_2 + 0x10);
  }
  iVar8 = **(int **)(DAT_091838d0 + 0xb8) + iVar8;
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      uVar2 = System_String__get_Chars(param_2,iVar7,0);
      iVar7 = iVar7 + 1;
      iVar8 = (uVar2 & 0xffff ^ iVar8 << 7) + iVar8;
    } while (iVar7 < *(int *)(param_2 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    iVar8 = iVar8 - (iVar8 >> 0x11);
    iVar8 = iVar8 - (iVar8 >> 0xb);
    uVar1 = iVar8 - (iVar8 >> 5);
    uVar2 = *(uint *)(param_1 + 0x20) & uVar1;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
    do {
      if (lVar6 == 0) {
        uVar4 = Newtonsoft_Json_DefaultJsonNameTable__AddEntry(param_1,param_2,uVar1);
        return uVar4;
      }
      if (*(uint *)(lVar6 + 0x18) == uVar1) {
        if (*(long *)(lVar6 + 0x10) == 0) break;
        uVar3 = System_String__Equals(*(long *)(lVar6 + 0x10),param_2,4,0);
        if ((uVar3 & 1) != 0) {
          return *(undefined8 *)(lVar6 + 0x10);
        }
      }
      lVar6 = *(long *)(lVar6 + 0x20);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

