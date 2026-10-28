// rea decompile_all
// name: Newtonsoft.Json.DefaultJsonNameTable$$Get
// address: 0x763cd88
// body: available
// range: 0x763cd88-0x763cf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763cf08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763cf0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_DefaultJsonNameTable__Get(long param_1,long param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((DAT_09522274 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091838d0);
    DAT_09522274 = 1;
  }
  if (param_4 == 0) {
    puVar5 = *(undefined8 **)(DAT_09535468 + 0xb8);
LAB_0763cef0:
    return *puVar5;
  }
  if (*(int *)(DAT_091838d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_2 != 0) {
    if (param_3 < *(uint *)(param_2 + 0x18)) {
      iVar9 = **(int **)(DAT_091838d0 + 0xb8) + param_4;
      iVar1 = param_3 + 1;
      iVar9 = ((uint)*(ushort *)(param_2 + (long)(int)param_3 * 2 + 0x20) ^ iVar9 * 0x80) + iVar9;
      if (iVar1 < (int)(param_4 + param_3)) {
        lVar6 = (long)(int)(param_4 + param_3) - (long)iVar1;
        puVar7 = (ushort *)(param_2 + (long)iVar1 * 2 + 0x20);
        do {
          if (1U - param_4 <= param_3 - *(uint *)(param_2 + 0x18)) goto LAB_0763cf08;
          lVar6 = lVar6 + -1;
          iVar9 = ((uint)*puVar7 ^ iVar9 << 7) + iVar9;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar2 = *(uint *)(param_1 + 0x20);
      thunk_FUN_03f6a5cc();
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) goto LAB_0763cf0c;
      iVar9 = iVar9 - (iVar9 >> 0x11);
      iVar9 = iVar9 - (iVar9 >> 0xb);
      uVar3 = iVar9 - (iVar9 >> 5);
      uVar2 = uVar2 & uVar3;
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        do {
          if (lVar6 == 0) {
            return 0;
          }
          if (*(uint *)(lVar6 + 0x18) == uVar3) {
            uVar8 = *(undefined8 *)(lVar6 + 0x10);
            if (*(int *)(DAT_091838d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = Newtonsoft_Json_DefaultJsonNameTable__TextEquals(uVar8,param_2,param_3,param_4);
            if ((uVar4 & 1) != 0) {
              puVar5 = (undefined8 *)(lVar6 + 0x10);
              goto LAB_0763cef0;
            }
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while( true );
      }
    }
LAB_0763cf08:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0763cf0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

