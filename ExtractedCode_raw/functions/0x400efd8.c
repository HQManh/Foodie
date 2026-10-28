// rea decompile_all
// name: std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
// address: 0x400efd8
// body: available
// range: 0x400efd8-0x400f24f inclusive
// range: 0x400f26c-0x400f293 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400f290 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long local_100;
  long local_f8;
  byte *local_f0;
  code *local_e8;
  byte local_dc [100];
  long *local_78;
  undefined1 *local_70;
  undefined1 ***local_68;
  undefined1 **local_48;
  
  local_f0 = local_dc;
  local_e8 = __do_nothing;
  local_78 = param_2;
  ios_base::getloc();
  local_70 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_48 = &local_70;
    local_68 = &local_48;
    __call_once((ulong *)ctype<char>::id,&local_68,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_100 + 0x18) - *(long *)(local_100 + 0x10) >> 3) <=
       (long)(int)ctype<char>::id._8_4_ - 1U) ||
     (plVar10 = *(long **)(*(long *)(local_100 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8
                          ), plVar10 == (long *)0x0)) {
    uVar6 = FUN_03ff9c28();
    locale::~locale((locale *)&local_100);
    pbVar7 = local_f0;
    local_f0 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      (*local_e8)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar6);
  }
  local_48 = (undefined1 **)((ulong)local_48 & 0xffffffffffffff00);
  uVar5 = __do_get(&local_78,param_3,param_4 & 1,&local_100,*(undefined4 *)(param_5 + 8),param_6,
                   &local_48,plVar10,&local_f0,&local_f8,&local_78);
  if ((uVar5 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined2 *)param_7 = 0;
    }
    else {
      **(undefined1 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if ((char)local_48 != '\0') {
      cVar2 = (**(code **)(*plVar10 + 0x38))(plVar10,0x2d);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                (param_7,cVar2);
    }
    bVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,0x30);
    pbVar9 = (byte *)(local_f8 + -1);
    pbVar8 = local_f0;
    pbVar7 = local_f0;
    if (local_f0 < pbVar9) {
      do {
        pbVar8 = pbVar7;
        if (*pbVar7 != bVar3) break;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar9;
      } while (pbVar7 != pbVar9);
    }
    FUN_0400f298(param_7,pbVar8);
  }
  if (local_78 == (long *)0x0) {
LAB_0400f1b8:
    bVar1 = true;
    if (param_3 != (long *)0x0) goto LAB_0400f1c0;
LAB_0400f1ac:
    if (bVar1 == false) goto LAB_0400f1dc;
  }
  else {
    if (local_78[3] == local_78[4]) {
      iVar4 = (**(code **)(*local_78 + 0x48))();
      if (iVar4 == -1) {
        local_78 = (long *)0x0;
        goto LAB_0400f1b8;
      }
      bVar1 = local_78 == (long *)0x0;
    }
    else {
      bVar1 = false;
    }
    if (param_3 == (long *)0x0) goto LAB_0400f1ac;
LAB_0400f1c0:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar1 != (iVar4 == -1)) goto LAB_0400f1dc;
    }
    else if (bVar1 != false) goto LAB_0400f1dc;
  }
  *param_6 = *param_6 | 2;
LAB_0400f1dc:
  plVar10 = local_78;
  locale::~locale((locale *)&local_100);
  pbVar7 = local_f0;
  local_f0 = (byte *)0x0;
  if (pbVar7 != (byte *)0x0) {
    (*local_e8)();
  }
  return plVar10;
}

