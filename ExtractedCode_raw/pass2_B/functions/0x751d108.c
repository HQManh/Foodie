// rea decompile_all
// name: System.BitConverter.<>c$$<ToString>b__38_0
// address: 0x751d108
// body: available
// range: 0x751d108-0x751d29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751d188 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751d284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751d294 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751d298 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_BitConverter_<>c__<ToString>b__38_0
               (undefined8 param_1,undefined2 *param_2,uint param_3,long param_4,ulong param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_0952176e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9758);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091f96d8);
    DAT_0952176e = 1;
  }
  uVar4 = (uint)param_5;
  uVar6 = (uint)(param_5 >> 0x20);
  if (param_4 == 0) {
    if (uVar6 != 0 || uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
  }
  else {
    if ((*(uint *)(param_4 + 0x18) < uVar4) || (*(uint *)(param_4 + 0x18) - uVar4 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((uVar6 != 0) && (param_3 != 0)) {
      if (DAT_091f96d8 != 0) {
        bVar1 = *(byte *)(param_4 + 0x20 + (long)(int)uVar4);
        uVar2 = System_String__get_Chars(DAT_091f96d8,bVar1 >> 4,0);
        *param_2 = uVar2;
        if (param_3 == 1) goto LAB_0751d298;
        if (DAT_091f96d8 != 0) {
          uVar2 = System_String__get_Chars(DAT_091f96d8,bVar1 & 0xf,0);
          param_2[1] = uVar2;
          if (1 < (int)uVar6) {
            lVar5 = (param_5 >> 0x20) - 1;
            uVar6 = 4;
            pbVar3 = (byte *)((int)uVar4 + param_4 + 0x21);
            do {
              if (param_3 <= uVar6 - 2) goto LAB_0751d298;
              bVar1 = *pbVar3;
              param_2[(int)(uVar6 - 2)] = 0x2d;
              if (param_3 <= uVar6 - 1) goto LAB_0751d298;
              if (DAT_091f96d8 == 0) goto LAB_0751d284;
              uVar2 = System_String__get_Chars(DAT_091f96d8,bVar1 >> 4,0);
              param_2[(int)(uVar6 - 1)] = uVar2;
              if (param_3 <= uVar6) goto LAB_0751d298;
              if (DAT_091f96d8 == 0) goto LAB_0751d284;
              uVar2 = System_String__get_Chars(DAT_091f96d8,bVar1 & 0xf,0);
              lVar5 = lVar5 + -1;
              param_2[(int)uVar6] = uVar2;
              uVar6 = uVar6 + 3;
              pbVar3 = pbVar3 + 1;
            } while (lVar5 != 0);
          }
          return;
        }
      }
LAB_0751d284:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0751d298:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

