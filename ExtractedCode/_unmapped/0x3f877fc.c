// rea decompile_all
// name: FUN_03f877fc
// address: 0x3f877fc
// body: available
// range: 0x3f877fc-0x3f879d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f879d0 to 0x89dc380 <EXTERNAL>::__android_log_print (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f877fc(char *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_38;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  plVar1 = DAT_09534a00;
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  if (plVar1 != (long *)0x0) {
    local_38 = (long *)0x0;
    iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_38,0x10002);
    if (iVar3 == -2) {
      (**(code **)(*DAT_09534a00 + 0x20))(DAT_09534a00,&local_38,0);
    }
    lVar4 = (**(code **)(*local_38 + 0x30))(local_38,"java/util/Locale");
    if ((lVar4 != 0) &&
       (lVar5 = (**(code **)(*local_38 + 0x388))(local_38,lVar4,"getDefault","()Ljava/util/Locale;")
       , lVar5 != 0)) {
      uVar6 = FUN_03f87a08(local_38,lVar4,lVar5);
      lVar4 = (**(code **)(*local_38 + 0x108))
                        (local_38,lVar4,"toLanguageTag","()Ljava/lang/String;");
      if (lVar4 != 0) {
        uVar6 = FUN_03f87a74(local_38,uVar6,lVar4);
        uVar7 = (**(code **)(*local_38 + 0x548))(local_38,uVar6,0);
        __android_log_print(4,"IL2CPP","Locale %s",uVar7);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(param_1);
        (**(code **)(*local_38 + 0x550))(local_38,uVar6,uVar7);
      }
    }
    cVar2 = (**(code **)(*local_38 + 0x720))();
    if (cVar2 != '\0') {
      (**(code **)(*local_38 + 0x88))();
    }
    if (iVar3 == -2) {
      (**(code **)(*DAT_09534a00 + 0x28))();
    }
    return;
  }
  __android_log_print(4,"IL2CPP","Java VM not initialized");
  return;
}

