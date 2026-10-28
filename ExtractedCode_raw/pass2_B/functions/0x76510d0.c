// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$PrepareBufferForReadData
// address: 0x76510d0
// body: available
// range: 0x76510d0-0x765128b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76511d0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7651288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__PrepareBufferForReadData
               (long param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_095223ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095223ab = 1;
  }
  plVar8 = (long *)(param_1 + 0x80);
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar1 = *(int *)(param_1 + 0x88) + param_3;
    if (iVar2 + -1 <= iVar1) {
      if ((param_2 & 1) != 0) {
        uVar3 = iVar2 << 1;
        if (0x7ffffffe < uVar3) {
          uVar3 = 0x7fffffff;
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Math__Max(uVar3,iVar1 + 1,0);
        uVar7 = Newtonsoft_Json_Utilities_BufferUtils__RentBuffer
                          (*(undefined8 *)(param_1 + 0xc0),uVar5,0);
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 != 0) {
          System_Buffer__BlockCopy(lVar6,0,uVar7,0,*(int *)(lVar6 + 0x18) << 1,0);
          Newtonsoft_Json_Utilities_BufferUtils__ReturnBuffer
                    (*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),0);
          *(undefined8 *)(param_1 + 0x80) = uVar7;
          thunk_FUN_03f5d7b8(plVar8,uVar7);
          return;
        }
        goto LAB_07651288;
      }
      iVar4 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x8c);
      iVar1 = param_3 + iVar4 + 1;
      if (iVar1 < iVar2) {
        if (0 < iVar4) {
          System_Buffer__BlockCopy(lVar6,*(int *)(param_1 + 0x8c) << 1,lVar6,0,iVar4 * 2,0);
        }
      }
      else {
        uVar7 = Newtonsoft_Json_Utilities_BufferUtils__RentBuffer
                          (*(undefined8 *)(param_1 + 0xc0),iVar1,0);
        if (0 < iVar4) {
          System_Buffer__BlockCopy
                    (*(undefined8 *)(param_1 + 0x80),*(int *)(param_1 + 0x8c) << 1,uVar7,0,iVar4 * 2
                     ,0);
        }
        Newtonsoft_Json_Utilities_BufferUtils__ReturnBuffer
                  (*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),0);
        *(undefined8 *)(param_1 + 0x80) = uVar7;
        thunk_FUN_03f5d7b8(plVar8,uVar7);
      }
      iVar1 = *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x88) = iVar4;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) - iVar1;
    }
    return;
  }
LAB_07651288:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

