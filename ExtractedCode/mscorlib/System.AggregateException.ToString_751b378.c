// rea decompile_all
// name: System.AggregateException$$ToString
// address: 0x751b378
// body: available
// range: 0x751b378-0x751b57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751b54c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_AggregateException__ToString(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  int local_64;
  
  if ((DAT_09521747 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b9520);
    FUN_03f5c2a4(&DAT_091b9528);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f80e8);
    FUN_03f5c2a4(&DAT_091fa198);
    FUN_03f5c2a4(&DAT_091f8b48);
    DAT_09521747 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  uVar3 = System_Exception__ToString(param_1,0);
  if (plVar2 != (long *)0x0) {
    System_Text_StringBuilder__Append(plVar2,uVar3,0);
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 != 0) {
      iVar7 = 0;
      do {
        iVar1 = FUN_05f077b8(lVar4,DAT_091b9520);
        if (iVar1 <= iVar7) {
          (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          return;
        }
        System_Text_StringBuilder__AppendLine(plVar2,0);
        System_Text_StringBuilder__Append(plVar2,DAT_091f8b48,0);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_64 = iVar7;
        uVar5 = FUN_03f5c42c(DAT_09535420,&local_64);
        System_Text_StringBuilder__AppendFormat(plVar2,uVar3,DAT_091f80e8,uVar5,0);
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (plVar6 = (long *)FUN_05f07844(*(long *)(param_1 + 0x90),iVar7,DAT_091b9528),
           plVar6 == (long *)0x0)) break;
        uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        System_Text_StringBuilder__Append(plVar2,uVar3,0);
        System_Text_StringBuilder__Append(plVar2,DAT_091fa198,0);
        System_Text_StringBuilder__AppendLine(plVar2,0);
        lVar4 = *(long *)(param_1 + 0x90);
        iVar7 = iVar7 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

