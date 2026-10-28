// rea decompile_all
// name: Mono.Security.Cryptography.KeyPairPersistence$$ToXml
// address: 0x74200a8
// body: available
// range: 0x74200a8-0x74202af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74202ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_KeyPairPersistence__ToXml(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_38;
  undefined4 local_34;
  
  if ((DAT_09520f89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09211348);
    FUN_03f5c2a4(&DAT_091fadc8);
    FUN_03f5c2a4(&DAT_091fa408);
    FUN_03f5c2a4(&DAT_092085b0);
    FUN_03f5c2a4(&DAT_091f5f68);
    FUN_03f5c2a4(&DAT_092085b8);
    DAT_09520f89 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  uVar3 = System_Environment__get_NewLine(0);
  if (plVar2 != (long *)0x0) {
    System_Text_StringBuilder__AppendFormat(plVar2,DAT_091fa408,uVar3,0);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 0x18);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
        System_Text_StringBuilder__AppendFormat(plVar2,DAT_092085b0,lVar5,0);
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_074202ac;
      }
      local_34 = *(undefined4 *)(lVar6 + 0x10);
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
      uVar4 = System_Environment__get_NewLine(0);
      System_Text_StringBuilder__AppendFormat(plVar2,DAT_09211348,uVar3,uVar4,0);
      uVar3 = Mono_Security_Cryptography_KeyPairPersistence__get_ContainerName(param_1);
      uVar4 = System_Environment__get_NewLine(0);
      System_Text_StringBuilder__AppendFormat(plVar2,DAT_092085b8,uVar3,uVar4,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
        if (iVar1 != -1) {
          local_38 = iVar1;
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_38);
          System_Text_StringBuilder__AppendFormat(plVar2,DAT_091f5f68,uVar3,0);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar3 = System_Environment__get_NewLine(0);
        System_Text_StringBuilder__AppendFormat(plVar2,DAT_091fadc8,uVar4,uVar3,0);
        (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        return;
      }
    }
  }
LAB_074202ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

