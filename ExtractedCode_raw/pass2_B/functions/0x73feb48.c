// rea decompile_all
// name: Mono.Security.X509.X509Extension$$WriteLine
// address: 0x73feb48
// body: available
// range: 0x73feb48-0x73fed6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fed64 to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73fed68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fed6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Extension__WriteLine(long param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  
  if ((DAT_09520e6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091f5ab0);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f5aa8);
    FUN_03f5c2a4(&DAT_09213540);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520e6c = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = Mono_Security_ASN1__get_Value();
    iVar6 = 0;
    uVar7 = param_4;
    do {
      if (iVar6 < param_3) {
        if (lVar3 == 0) goto LAB_073fed68;
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_073fed6c;
        uVar4 = System_Byte__ToString(lVar3 + 0x20 + (long)(int)uVar7,DAT_09213540,uVar4,0);
        if (param_2 == 0) goto LAB_073fed68;
        uVar7 = uVar7 + 1;
        System_Text_StringBuilder__Append(param_2,uVar4,0);
        puVar5 = &DAT_091f5a98;
      }
      else {
        puVar5 = &DAT_091f5ab0;
        if (param_2 == 0) goto LAB_073fed68;
      }
      System_Text_StringBuilder__Append(param_2,*puVar5,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 8);
    System_Text_StringBuilder__Append(param_2,DAT_091f5aa8,0);
    if (0 < param_3) {
      if (lVar3 == 0) goto LAB_073fed68;
      do {
        if (*(uint *)(lVar3 + 0x18) <= param_4) {
LAB_073fed6c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        bVar1 = *(byte *)(lVar3 + (int)param_4 + 0x20);
        if (bVar1 < 0x20) {
          System_Text_StringBuilder__Append(param_2,DAT_091f8f68,0);
        }
        else {
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Convert__ToChar(bVar1,0);
          System_Text_StringBuilder__Append(param_2,uVar2,0);
        }
        param_3 = param_3 + -1;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
    uVar4 = System_Environment__get_NewLine(0);
    System_Text_StringBuilder__Append(param_2,uVar4,0);
    return;
  }
LAB_073fed68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

